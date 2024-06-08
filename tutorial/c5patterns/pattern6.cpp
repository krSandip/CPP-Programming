#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m;
    cin>>n;

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==m){
                cout<<j;
            }
            else if(j==1||j==n){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}