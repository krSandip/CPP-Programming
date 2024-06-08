#include<iostream>
using namespace std;
int vote(int x){
    int age=x;
    if(age>18){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return age;
}

int main(){
    int y;
    cout<<"enter the age of person : ";
    cin>>y;

    vote(y);

    return 0;
}