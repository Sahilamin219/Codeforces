#include <bits/stdc++.h>
#define f(i,a,b) for(long long i=a;i<b;i++)
#define r(i,a,b) for(long long i=a;i>b;i--)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast;
    ll n;cin>>n;
    vector<int> v[n+1];
    f(i,2,n+1)
    {
        ll val;cin>>val;
        v[val].push_back(i);
    }
    for(int x=1;x<n+1;x++){
        // for(auto y:v[x])cout<<x<<" "<<y<<"\n";
    }
    ll a[n+1];
    f(i,1,n+1){
        cin>>a[i];
    }
    ll ans = 0;
    f(i,0,n){
        for(auto x:v[i+1]){
            // cout<<i+1<<" "<<x<<" <-> "<<a[i+1]<<" and "<<a[x]<<"\n";
            if(a[i+1]!=a[x]){
                ans++;
                // cout<<i+1<<" "<<x<<" <-> "<<a[i+1]<<" and "<<a[x]<<"\n";
            }
        }
    }
    cout<<ans+1;
    return 0;
}