#include<iostream>
using namespace std;

int main()
{
    int arr[]={-1,0,1,2,-1,-4};
    int n=sizeof(arr)/sizeof(arr[0]);
    

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int element=arr[i];
                arr[i]=arr[j];
                arr[j]=element;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int x;
    cout<<"enter x : ";
    cin>>x;

    int count=0;

    for(int i=0;i<n-2;i++){
        int j=i+1;
        int k=n-1;
        int newtarget=x-arr[i];
        while(j<k){
            int pairsum=arr[j]+arr[k];
            
        }

    }

   // for(int i=0;i<n)

    //cout<<"no. of triplets is : "<<count;
    return 0;

}