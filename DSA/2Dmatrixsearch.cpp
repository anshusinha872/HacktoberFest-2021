#include<iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"Enter the Rows in Matrix :";
    cin>>n;
    cout<<"Enter the Columns in Matrix :";
    cin>>m;
    

    int target;
    cout<<"Enter the Elemet You want to Search :";
    cin>>target;

    int arr[n][m];
    cout<<"Enter Matrix elements :";
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j< m; j++)
        {
            cin>>arr[i][j];
        }
    }

    bool found = false;
    int r=0, c=n-1;
    while(r<m && c>=0){
        if(arr[r][c]==target){
            found = true;
            break;
        }
        else if(arr[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }

    if (found){
        cout<<"Element Found";
        cout<<endl;}
    else{    
        cout<<"Element not found";
        cout<<endl;}

    return 0;    
}

