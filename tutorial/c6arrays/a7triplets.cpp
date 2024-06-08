#include<iostream>
using namespace std;

int main()
{
    int arr[]={0,3,4,2,9,1,5};
    int x=7;

    int sum=0;

    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            for(int k=j+1;k<7;k++){
            if(arr[i]+arr[j]+arr[k]==x){
                sum+=1;
            }
        }
        }    
    }
    cout<<"total no. of triplets are : "<<sum;

    return 0;
}