// program to clear the bit at the given location
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
    int var = ((n&(~(1<<pos))));
    cout<<"the value after clearing bit at "<<pos<<"th position is ";
    cout<<var<<endl;
    return 0; 
}
