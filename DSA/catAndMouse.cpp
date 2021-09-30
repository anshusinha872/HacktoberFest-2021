#include<iostream>
using namespace std;
string catAndMouse(int x,int y,int z)
{
    int d1=0,d2=0;
    d2=(max(z,y)-min(z,y));
    d1= (max(z,x)-min(z,x));
    if(d2>d1)
    {
        return "Cat A";
    }
    else if(d1==d2)
    {
        return "Mouse C";
    }
    else
    {
        return "Cat B";
    }
}
int main(){
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        cout<<catAndMouse(x,y,z)<<endl;
    }
    return 0;
}
