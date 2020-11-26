#include <bits/stdc++.h>
#define Fo(i,a,b) for(long long int i=a;i<b;i++)
using namespace std;
typedef long long int ll;
#define vi vector<ll> 
ll n, m, ans=0;
vi cat(1000000+1);
void dfs__(int node, int parent, vector<ll> v[], int cur_cats)
{
    if(cur_cats + cat[node] > m)return ;
    if(v[node].size()==1 and node!=1){
		ans++;
		return;
	}
    for(auto x: v[node])
    {
        if(x!=parent and cat[node])dfs__(x, node,v, cur_cats + cat[node]);
        else if(x!=parent)dfs__(x, node,v, 0);
    }
}
void solve()
{
	cin>>n>>m;
    vi v[n+1];
    for(int i=1;i<=n;i++)cin>>cat[i];
    for(int i=0;i<n-1;i++)
    {
        ll a,b;cin>>a>>b;
        v[a].push_back(b);v[b].push_back(a);
    }
    dfs__(1, -1, v, 0);
    cout<<ans;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;}