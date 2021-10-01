#include<iostream>
using namespace  std;

int main(){
    int n,m;
    cout<<"Enter the number of Rows :";
    cin>>n;
    cout<<"Enter the number of Columns :";
    cin>>m;

    int arr[n][m];
    cout<<"Enter the Elements of array :";
    for (int  i = 0; i < n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for (int  i = 0; i < n; i++)
    {
        for(int j=i; j<m; j++)
        {
            int temp= arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i]= temp;
        }
    }

    cout<<"Array after tranpose :";
    for (int  i = 0; i < n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
