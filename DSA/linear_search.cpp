#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr, int key)
{
    int s = 0;
    int e = arr.size() - 1;
    for (int i = s; i < e; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    int key = 5;
    cout<<linearSearch(arr,key);
    return 0;
}