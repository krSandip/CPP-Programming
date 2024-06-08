#include<iostream>
using namespace std;

int oddnumbers(int n1,int n2){
    for(int i=n1;i<=n2;i++){
    if(i%2==1){
        cout<<i<<endl;
    }

}

    return n1;
}

int main(){
    int x,y;
    cin>>x;
    cin>>y;

    oddnumbers(x,y);
    
    return 0;
}