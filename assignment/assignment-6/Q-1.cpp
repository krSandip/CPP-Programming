#include<iostream>
using namespace std;
int sqr(int x){
    int square=x*x;
    cout<<square<<endl;
    return square;
}

int main()
{
    int n;
    cout<<"enter the number till which the squares has to be calculated : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        sqr(i);

    }
return 0;
}