#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
ll k;
vector<vector<ll>> dp(101, vector<ll>(101, -1)); 
int ans(vector<ll> v, ll i, ll j, ll c)
{
    if(i>=v.size() or j<0) return 1e9;
    if(i>=j or v[j]-v[i]<=k) { return c; }
    if(dp[i][j]!= -1) return dp[i][j];
    dp[i][j] = min (ans(v, i+1, j, c+1), ans(v, i, j-1, c+1)) ;
    return dp[i][j];
}
int main()
{
    ll n;cin>>n>>k;
    vector<ll> v(n); for(int i=0;i<n;i++) { cin>>v[i]; }
    sort(v.begin(), v.end());
    int c1=0 , i=0, j=n-1;
    c1=ans(v,i,j, 0);
    cout<<c1;
	return 0;
}