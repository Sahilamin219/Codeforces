#include <bits/stdc++.h>
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define pb push_back
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
ll ans=0;
vi ans_v;
void dfs(vi tri[], ll *visited, ll init[], ll goal[], ll h, ll odd_opr, ll even_opr, ll index)
{
    if(h&1)init[index]=(init[index] + odd_opr) % 2 ;
    else init[index]=(init[index] + even_opr) % 2 ;
    if(init[index]!=goal[index])
    {
        if(h%2)odd_opr++;
        else even_opr++;
        ans++;
        ans_v.pb(index);
    }
    visited[index]=1;
    for(auto x: tri[index])
    {
        if(!visited[x])
        {
            dfs(tri, visited, init, goal, h+1, odd_opr, even_opr, x );
        }
    }
}
int main() {
    ll n;cin>>n;ll a,b;
    vector<ll> tri[n+1];
    ll init[n+1];
    ll goal[n+1];
    ll visited[n+1]={0};
    f(i,0,n-1)
    {
        cin>>a>>b;
        tri[a].pb(b);
        tri[b].pb(a);
    }
    f(i,1,n+1)cin>>init[i];
    f(i,1,n+1)cin>>goal[i];
    dfs(tri, visited, init, goal, 1, 0, 0, 1);
    cout<<ans<<"\n";
    for(auto x: ans_v){cout<<x<<"\n";}
}