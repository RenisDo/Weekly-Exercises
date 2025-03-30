#include <iostream>
using namespace std;

int strlen(const char *a) {
    const char *p = a;
    while (*p) p++;
    return p - a;
}

void strcpy(char *second, const char *origin) {
    while ((*second++ = *origin++));
}

void reverse(char *a) {
    int len = strlen(a);
    char *start = a, *end = a + len - 1;
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

void delete_char(char *a, char c) {
    char *second = a;
    for (char *origin = a; *origin; origin++) {
        if (*origin != c) *second++ = *origin;
    }
    *second = '\0';
}

void pad_right(char *a, int n) {
    int len = strlen(a);
    if (len >= n) return;
    char *p = a + len;
    while (len++ < n) *p++ = ' ';
    *p = '\0';
}

void pad_left(char *a, int n) {
    int len = strlen(a);
    if (len >= n) return;
    int shift = n - len;
    for (int i = len; i >= 0; i--) a[i + shift] = a[i];
    for (int i = 0; i < shift; i++) a[i] = ' ';
}

void truncate(char *a, int n) {
    if (strlen(a) > n) a[n] = '\0';
}

bool is_palindrome(const char *a) {
    const char *end = a + strlen(a) - 1;
    while (a < end) {
        if (*a++ != *end--) return false;
    }
    return true;
}

void trim_left(char *a) {
    char *start = a;
    while (*start == ' ') start++;
    if (start != a) strcpy(a, start);
}

void trim_right(char *a) {
    char *end = a + strlen(a) - 1;
    while (end >= a && *end == ' ') *end-- = '\0';
}

int main() {
    char str[] = "  hello world  ";
    
    reverse(str);
    cout << "Reversed: " << str << endl;
    
    strcpy(str, "hello world");
    delete_char(str, 'l');
    cout << "Deleted 'l': " << str << endl;
    
    strcpy(str, "hello");
    pad_right(str, 10);
    cout << "Padded right: |" << str << "|" << endl;
    
    strcpy(str, "hello");
    pad_left(str, 10);
    cout << "Padded left: |" << str << "|" << endl;
    
    strcpy(str, "hello world");
    truncate(str, 5);
    cout << "Truncated: " << str << endl;
    
    strcpy(str, "madam");
    cout << "Is palindrome: " << (is_palindrome(str) ? "Yes" : "No") << endl;
    
    strcpy(str, "  hello world");
    trim_left(str);
    cout << "Trimmed left: " << str << endl;
    
    strcpy(str, "hello world  ");
    trim_right(str);
    cout << "Trimmed right: " << str << endl;
    
    return 0;
}
