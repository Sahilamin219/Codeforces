#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define deb(v) for(auto x: v){cout<<x<<" ";}cout<<"\n";
#define deb2(v) for(auto x: v){cout<<x.frist<<","<<x.second<<" ";}cout<<"\n";

int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int trees,humans;cin>>trees>>humans;
	vector<ll> vec(trees), res;
	map<ll,ll> mi;
	queue<ll> q;
	for(int i=0;i<trees;i++)cin>>vec[i], mi[vec[i]]=0, q.push(vec[i]);
	ll ans=0;
	while(!q.empty())
	{
		if(res.size()==humans)break;
		ll top=q.front();
		// top denotes current x co-ordinate which being filled/processed
		q.pop();
		if(mi[top]!=0)
		{
			ans+=mi[top];
			res.push_back(top);
		}
		if(!mi.count(top-1))
		{
			mi[top-1] = 1 + mi[top];
			q.push(top-1);
		}
		if(!mi.count(top+1))
		{
			mi[top+1] = 1 + mi[top];
			q.push(top+1);
		}
	}
	cout<<ans<<"\n";
	for(auto x:res)cout<<x<<" ";
}