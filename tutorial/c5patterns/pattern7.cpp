#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m;
    cin>>n;

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i%2==0){
                if(j%2==0){
                    cout<<"1";
                }
                else{
                    cout<<"2";
                }
            }
            else if(i%2==1){
                if(j%2==1){
                    cout<<"1";
                }
                else{
                    cout<<"2";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}