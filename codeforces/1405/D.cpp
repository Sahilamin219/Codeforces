#include <bits/stdc++.h>
#define Fo(i,a,b) for(long long int i=a;i<b;i++)
using namespace std;
typedef long long int ll;
#define vi vector<ll> 
ll diameter=0;
vi depth(100001,0), tr[100001];
ll dfs__(ll node ,ll parent)
{
	ll dia1=0;
	for(auto x: tr[node])
	{
		if(x!=parent)
		{
			depth[x] = 1 + depth[node];
			ll dia2 = 1 + dfs__(x, node);
			diameter = max(diameter, dia1 + dia2);
			dia1 = max(dia1, dia2);
		}
	}
	return dia1;
}
void solve()
{
	ll n,a,b,da,db;
	cin>>n>>a>>b>>da>>db;
	Fo(i,1,n)
	{
		ll x,y;cin>>x>>y;
		tr[x].push_back(y);tr[y].push_back(x);
	}
	diameter=0;
	depth.clear();
	depth[a]=0; 
 	dfs__(a, -1); 
	puts( diameter <= 2*da or db <= 2*da or depth[b] <= da ? "Alice" : "Bob");
	Fo(i,1,n+1) tr[i].clear();
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;cin>>t;
    while(t--)solve();
    return 0;}