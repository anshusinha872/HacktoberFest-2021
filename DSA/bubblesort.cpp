#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of the array: "<<endl;
    cin>>n;
    int arr[n];
    int var1=n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<var1-1;j++)
        {
            if(arr[j]<arr[j+1])
            {

            }
            else
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        var1--;
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
