#include<iostream>
#include<vector>
using namespace std;
// difference between elements at odd and even indices of array
int main(){

    int arr[5] = {2,4,6,4,7};
    int anssum=0;

    for(int i=0; i<5; i++){
        if(i%2 == 0){
            anssum+=arr[i];
        }
        else{
            anssum-=arr[i];
        }
    }

    cout<<"difference = "<<anssum;

    return 0;
}