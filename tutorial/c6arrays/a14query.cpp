#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    int m=1e5+10;
    vector<int> freq(m,0);

    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }

    int q;
    cout<<"enter queries : ";
    cin>>q;

    while(q--){
        int queryelement;
        cin>>queryelement;

        cout<<freq[queryelement]<<endl;
    }

    return 0;

}