#include<iostream>
using namespace std;
int addition(int p,int q){
    int add=p+q;
    return add;
}
int main(){
    int a=2;
    int b=3;

    int answer=addition(a,b);
    cout<<answer;
    return 0;
}
