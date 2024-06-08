#include<iostream>
using namespace std;
int main()
{
    int x,y;
    char character;
    cout<<"enter two numbers"<<endl;
    cin>>x;
    cin>>y;
    cout<<"enter an operator(+,-,*,/)"<<endl;
    cin>>character;
    
    switch(character){
        case '+':
        cout<<x+y<<endl;
        break;

        case '-':
        cout<<x-y<<endl;
        break;

        case '*':
        cout<<x*y<<endl;
        break;

        case '/':
        cout<<x/y<<endl;
        break;
        
        default:
        cout<<"default case.";

    }

    return 0;
}