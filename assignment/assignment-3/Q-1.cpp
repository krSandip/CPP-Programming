#include<iostream>
using namespace std;
int main()
{
    int length, breadth;
    cin>>length;
    cin>>breadth;

    if(length==breadth){
        cout<<"it is square."<<endl;
    }
    else{
        cout<<"it is rectangle.";
    }
    return 0;
}