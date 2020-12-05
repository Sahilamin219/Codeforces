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
		ll n;cin>>n;
		vector<string> s(n);
		for(i=0;i<n;i++)cin>>s[i];
		vector<array<ll,4>> v(10, {0,n,0,n});
		vector<ll> res(10,0);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				ll x = s[i][j] - '0';
				v[x][0] = max( { v[x][0], i } );
				v[x][1] = min( { v[x][1], i } );
				v[x][2] = max( { v[x][2], j } );
				v[x][3] = min( { v[x][3], j } );
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				ll x = s[i][j] - '0';
				res[x] = max( res[x] , max(v[x][0] - i, i-v[x][1])*max(j, n-j-1));
				res[x] = max( res[x] , max(v[x][2] - j, j-v[x][3])*max(i, n-i-1));
			}
		}
		for(auto x:res){cout<<x<<" ";}cout<<"\n";
	}
}