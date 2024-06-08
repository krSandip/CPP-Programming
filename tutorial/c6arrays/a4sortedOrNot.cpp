#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[6] = {2,4,5,7,8,9};
    bool flag = true;

    for(int i=1;i<6;i++){
        if(arr[i]<=arr[i-1]){
            flag=false;
        }
    }
    cout<<flag;
    return 0;
}