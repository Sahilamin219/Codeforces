#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define deb(v) for(auto x: v){cout<<x<<" ";}cout<<"\n";
#define deb2(v) for(auto x: v){cout<<x.frist<<","<<x.second<<" ";}cout<<"\n";

int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	long long int T=1, i=0, j=0, k=0; cin>>T;
	while(T--){
		ll n,k,i=0,j=0;cin>>n>>k;
		ll maxi=0, real=INT_MAX;
		vector<pair<ll,ll>> v(n);
		for(i=0;i<n;i++)
		{
			cin>>v[i].first>>v[i].second;
		}
		for(i=0;i<n;i++)
		{
			maxi=0;
			for(j=0;j<n;j++)
			{
				ll d = abs( v[j].first - v[i].first ) + abs( v[j].second - v[i].second );
				maxi = max(maxi, d);
			}
			real=min(maxi, real);
		}
		if(real > k)cout<<-1<<"\n";
		else cout<<1<<"\n";
	}
}