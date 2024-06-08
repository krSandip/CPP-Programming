#include<iostream>
using namespace std;
int circle(int x){
    float area=3.14*x*x;
    float circumference=2*3.14*x;
    cout<<"area : "<<area<<endl;
    cout<<"circumference : "<<circumference;
    return area;
}

int main()
{
    int r;
    cout<<"enter the radius : ";
    cin>>r;

    circle(r);

    return 0;

}