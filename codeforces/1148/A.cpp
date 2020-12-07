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
	long long int T=1, i=0, j=0, k=0; //cin>>T;
	while(T--){
		ll a,b,c;cin>>a>>b>>c;
		if(a==b)
		{
			cout<<a+b+2*c;
		}
		else 
		{
			cout<<2*c + 2*min(a,b) + 1;
		}
	}
}