#include<iostream>
using namespace std;
int main()
{
    int array[5]={1,3,2,6,4};
    int size=sizeof(array)/sizeof(array[0]);

    int target = 2;
    int ans = -1;
    for(int i=0; i<size;i++){
        if(array[i]==target){
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}