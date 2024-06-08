#include<iostream>
using namespace std;
int main()
{
    int i=1, multiple;
    while(i){
        multiple=5*i;
        i=i+1;
        if(multiple%7==0)
        break;
    }
    cout<<"first multiple of 5 and 7 is : "<<multiple;
    return 0;
}