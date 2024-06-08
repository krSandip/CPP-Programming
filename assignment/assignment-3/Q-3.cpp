#include<iostream>
using namespace std;
int main()
{
    int cp,sp,profit,loss;//cp is cost price and sp is selling price
    cout<<"cp:";
    cin>>cp;
    cout<<"sp:";
    cin>>sp;

    profit=sp-cp;
    loss=cp-sp;
    if(sp-cp>0){
        cout<<"profit:"<<profit<<endl;
    }
    else{
        cout<<"loss:"<<loss;
    }

    return 0;
}