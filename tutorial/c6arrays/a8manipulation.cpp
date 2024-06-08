//finding a unique number in the given array - Manipulatoin

#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,4,5,1,7,2,1,4,5};

    int size=9;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }

    for(int i=0;i<size;i++){
        if(arr[i]>0){
        cout<<"unique number is : "<<arr[i];
        }
    }

    return 0;    
}