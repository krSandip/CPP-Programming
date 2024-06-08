#include<iostream>
using namespace std;

int largestElementIndex(int arr[],int size){
    int maxElement=0;
    int maxindex=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>maxElement){
            maxElement=arr[i];
            maxindex=i;
        }
    }
    return maxindex;
}


int main()
{
    int arr[]={2,4,6,1,0,9,3};
    int size=7;
    int indexoflargest=largestElementIndex(arr,size);

    arr[indexoflargest]=-1;
    int indexofsecondlargest=largestElementIndex(arr,size);
    cout<<arr[indexofsecondlargest];

    return 0;
}