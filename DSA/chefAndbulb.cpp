#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,p,k;
        cin>>n>>p>>k;
        ll answer_rem = ((p%k)-1);
        ll s = ((n-1)/k)*k;
        s= n-1-s;
        ll ans=0;
        if(answer_rem>s)
        {
            ans=(s+1)*((n-1)/k+1)+(answer_rem-s)*((n-1)/k);
        }
        else{
            ans= (answer_rem+1)*((n-1)/k+1);
        }
        for(ll i=answer_rem+1;i<=n-1;i+=k){
            ans++;
            if(i==p){
                cout<<ans<<endl;
                continue;
            }
        }
    }
    return 0;
}
