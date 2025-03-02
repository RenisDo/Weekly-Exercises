#include <bits/stdc++.h>
using namespace std;

int main(){
    int time = 10;
    int correctNumber = rand() % 100 + 1;
    bool check = true;
    do{
        int answer;
        cin >> answer;
        if(answer < correctNumber){
            cout << "Try a greater number!";
        }else if(answer > correctNumber){
            cout << "Try a smaller number!";
        }else check = false;
        time --;
        if(time > 0 || check = true){
        cout << " You have "<<time<<" times left!\n";
        }
    } while (time > 0 && check);
    if(time == 0){
        cout << "You have no more chance. Try again, later\n";
        cout << "The correct number is: "<<correctNumber;
    }else cout << "Great!! You win!";
    return 0;
}