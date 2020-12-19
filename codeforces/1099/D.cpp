#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> gr[100001];
vector<int> s(100001);
ll ans=0, flag=0;
void dfs(int node, ll cur_sum_till_parent, int depth_parity)
{
	if(depth_parity)
	{
		ans+=s[node]-cur_sum_till_parent;
		for(auto x:gr[node])dfs(x, s[node] ,!depth_parity);
	}
	else
	{
		ll mini=INT_MAX;
		for(auto v: gr[node])
		{
			mini = min(mini, s[v] - cur_sum_till_parent);
		}
		if(mini==INT_MAX)mini=0;
		if(mini<0)flag=1;
		ans+=mini;
		for(auto v: gr[node])
		{
			dfs(v, cur_sum_till_parent + mini, !depth_parity);	
		}
	}
}
int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int i,n,p;cin>>n;
	for(i=2;i<n+1;i++)
	{
		cin>>p;
		gr[p].push_back(i);
	}
	for(i=1;i<n+1;i++)cin>>s[i];
	dfs(1,0,1);
	if(flag)cout<<-1;
	else cout<<ans;
}
// const int maxn = 1e5+5;
// int n;
// vector<int> graph[maxn];
// vector<int> visit(maxn,0);
// vector<int> values(maxn,0);
// vector<int> collection(maxn,0);
// vector<int> sz(maxn,0);
// void dfs(int node, int parent)
// {
// 	if(graph[node].size()==1)
// 	{
// 		if(collection[node]==-1)values[node]=0;
// 		else values[node]=collection[node]-collection[parent];
// 		return ;
// 	}
// 	// sz[node]=1;
// 	int mini=INT_MAX;
// 	for(auto x: graph[node])
// 	{
// 		if(x!=parent)
// 		{
// 			mini=min(collection[x], mini);
// 		}
// 	}
// 	if(collection[node]==-1 and mini!=-1){
// 		if(values[node]==-1)values[node]=mini;
// 		collection[node]=collection[parent]+values[node];
// 		for(auto x: graph[node])
// 		{
// 			if(x!=parent)
// 			{
// 				values[x]=collection[x]-values[node];
// 				dfs(x, node);
// 			}
// 		}
// 	}
// 	else
// 	{
// 		if(values[node]==-1)values[node]=collection[node]-values[parent];
// 		for(auto x: graph[node])
// 		{
// 			if(x!=parent)
// 			{
// 				dfs(x, node);
// 			}
// 		}
// 	}
// }

// void solve()
// {
// 	cin>>n;
// 	for(int i=1;i<n;i++)
// 	{
// 		int a;cin>>a;
// 		graph[a].push_back(i);
// 		graph[i].push_back(a);
// 	}
// 	for(int i=1;i<=n;i++)cin>>collection[i], values[i]=-1;
// 	values[1]=collection[1];
// 	dfs(1,-1);
// 	ll ans=0;
// 	for(int i=1;i<n+1;i++)ans+=values[i], cout<<values[i]<<" ";
// 		cout<<ans<<"\n";
// }