#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter Your Marks:";
    cin>>marks;
    
    if(marks>=90){
        cout<<"your grade is A+"<<endl;
    }
    else if(marks>=80){
        cout<<"your grade is A"<<endl;
    }
    else if(marks>=70){
        cout<<"your grade is B+"<<endl;
    }
    else if(marks>=60){
        cout<<"your grade is B"<<endl;
    }
    else if(marks>=50){
        cout<<"your grade is C"<<endl;
    }
    else if(marks>=40){
        cout<<"your grade is D"<<endl;
    }
    else if(marks>=30){
        cout<<"your grade is E"<<endl;
    }
    else{
        cout<<"your grade is F";
    }
    return 0;
}