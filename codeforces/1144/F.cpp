#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define deb(v) for(auto x: v){cout<<x<<" ";}cout<<"\n";
#define deb2(v) for(auto x: v){cout<<x.frist<<","<<x.second<<" ";}cout<<"\n";
struct hash_pair { 
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    { 
        auto hash1 = hash<T1>{}(p.first); 
        auto hash2 = hash<T2>{}(p.second); 
        return hash1 ^ hash2; 
    } 
}; 

ll n,m;
const ll maxn = 2*(1e5)+5;
vector<ll> gr[maxn];
vector<ll> res;
ll visit[maxn];
// 1=red, -1=blue;
void dfs(int node,int colr)
{
	visit[node]=colr;
	for(auto x: gr[node])
	{
		if(visit[x]==-1)
		{	
			dfs(x, !colr);
		}
		else if(visit[x] == visit[node]){cout<<"NO\n";exit(0);}
	}
}
int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	long long int T=1, i=0, j=0, k=0; //cin>>T;
	while(T--){
		cin>>n>>m;
		ll a,b;
		memset(visit, -1ll, sizeof(visit));
		vector<pair<ll,ll>> edges(m);
		for(i=0;i<m;i++)
		{
			cin>>a>>b;
			gr[a].push_back(b);
			gr[b].push_back(a);
			edges[i] = {a,b};
		}
		dfs(a,1);
		cout<<"YES\n";
		for(pair<ll,ll> e:edges)
		{
			cout<< ( visit[e.first] > visit[e.second] ) ;
		}
	}
}