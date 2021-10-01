// program to find the bit at that given location
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Enter the position"<<endl;
    int pos;
    cin>>pos;
    if((n&(1<<pos))==0)
        cout<<"The bit is 0 "<<endl;
    else
        cout<<"the bit is 1"<<endl;
    return 0; 
}