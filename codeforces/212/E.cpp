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
int n;
vector<int> tr[5001];
vector<int> subTree(5001);
bitset<5001> ans, tmp;
// set<int> ans;
void input_und_tree()
{
	for(int i=1;i<n;i++){
		ll a,b;cin>>a>>b;
		a-=1;b-=1;
		tr[a].push_back(b);
		tr[b].push_back(a);
	}
}
int dfs(int node, int parent)
{
	subTree[node]=1;
	for(int x: tr[node])
	{
		if(x!=parent)
		{
			subTree[node] += dfs(x, node);
		}
	}
	return subTree[node];
}
int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	ll T=1, i=0, j=0, k=0; //cin>>T;
	while(T--){
			cin>>n;
			input_und_tree();
			for(i=0;i<n;i++)
			{
				tmp=1;
				// ll k=0;
				for(auto x: tr[i])
				{
					tmp |= (tmp<<dfs(x, i));
					// k += dfs(x,i)
					subTree.clear();
				}
				// if(k==n-1)
				// {
				// 	ans.insert(i, )
				// }
				// cout<<ans<<" ";
				ans|=tmp;
			}
			// cout<<ans<<" ";
			cout<<ans.count() - ans[0] - ans[n-1]<<"\n";
			for(i=1;i<n-1;i++)
			{
				if(ans[i])
				{
					cout<<i<<" "<<n-i-1<<"\n";
				}
			}
	}
}