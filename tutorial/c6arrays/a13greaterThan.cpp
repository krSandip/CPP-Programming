#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(5);

    cout<<"enter the elements"<<endl;

    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    int x;
    cout<<"enter the value x : ";
    cin>>x;

    int count=0;

    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count+=1;
        }
    }

    cout<<"number of element strictly greater than "<<x<<" are "<<count;

    return 0;

}