#include<iostream>
using namespace std;

int main()
{
    int sum=0,value;
    cout<<"enter the number till whhich the sum has to be calculated:"<<endl;
    cin>>value;
    for(int i=1; i<=value; i++)
    {
        sum+=i;
    }
    cout<<"sum of 1 to " << value << " = "<<sum<<endl;
    return 0;
}
