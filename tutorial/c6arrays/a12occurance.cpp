#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(6);

    cout<<"enter the elements : "<<endl;

    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    int x;
    cout<<"enter the element whose accurance you want to find : ";
    cin>>x;
    int count=0;

    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            count=count+1;
        }
    }

    cout<<"the number "<<x<<" occurs "<<count<<" times ";

    return 0;
}