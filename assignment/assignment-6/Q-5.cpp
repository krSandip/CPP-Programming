#include<iostream>
using namespace std;

int PrimeNumbers(int n1,int n2){
    for(int i=n1;i<=n2;i++){
        int flag=0;
        if(i==0 || i==1){
            flag=1;
        }

        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i<<endl;
        }
        

        }
    return n1;
}

int main()
{
    int a,b;
    cout<<"a : ";
    cin>>a;
    cout<<"b : ";
    cin>>b;

    PrimeNumbers(a,b);
    
    return 0;
}