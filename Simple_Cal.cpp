#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    char op;
    cin>>num1>>op>>num2;
    switch(op){
        case '+':
        cout<<num1+num2;
        break;
        
        case '-':
        cout<<num1-num2;
        break;
        
        case '*':
        cout<<num1*num2;
        
        case '/':
        if(!num2) cout<<"Invalid Operator";
        else cout<<num1/num2;
        break;
        
        case '%':
        if(!num2) cout<<"Invalid Operator";
        else cout<<num1%num2;
        break;

        default:
            cout << "Invalid Operator";
    }

    return 0;
}