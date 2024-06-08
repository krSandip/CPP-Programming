#include<iostream>
using namespace std;
int main(){

    int arr[5] = {1,3,4,5,8};

    int sum=0;

    for(int idx=0;idx<5;idx++){
        sum=sum+arr[idx];
    }
    cout<<"sum : "<< +sum;
    return 0;

}