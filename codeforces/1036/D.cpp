#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    ll a[n+1]={0};forn(i,n)cin>>a[i];
    int m;cin>>m;
    ll b[m+1]={0};forn(i,m)cin>>b[i];
    ll ans=0, i=0, j=0, v=a[0], u=b[0];
    while(i<n and j<m)
    {
        if(v==u)
        {
            u+=b[++j];
            v+=a[++i];
            ans++;
        }
        else if(v>u)
        {
            u+=b[++j];
        }
        else
        {
            v+=a[++i];
        }
    }
    if(v!=u)cout<<-1;
    else cout<<ans;
    return 0;
}