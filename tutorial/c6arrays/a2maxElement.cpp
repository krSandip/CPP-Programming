#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {2,4,3,1,0,7,};
    int size=sizeof(arr)/sizeof(arr[0]);

    
    int max=arr[0];

    for(int idx=0; idx<size; idx++){
        if(arr[idx]>max){
            max=arr[idx];
        }
    }
    cout<<"maxElement : "<<max;
return 0;
}