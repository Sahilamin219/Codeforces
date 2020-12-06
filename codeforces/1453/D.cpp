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
		ll k;cin>>k;
		if(k%2){cout<<-1<<"\n";continue;}
		// x(i+1) = 2*((xi) + 1);
		// xi = pow(2, i+1) - 2;
		vector<ll> v={0};
		ll xi=2;
		for(i=0;i<60;i++)
		{
			v.push_back(xi + v.back());
			xi*=2;
		}
		vector<ll> res;
		while(k)
		{
			auto stage_i = upper_bound(v.begin(), v.end(), k) - v.begin();
			k-=v[stage_i -1 ];

			int no_of_Stages = stage_i-1;
			res.push_back(1);
			no_of_Stages--;
			while(no_of_Stages--)res.push_back(0);
 		}
 		cout<<res.size()<<"\n";
 		for(auto x:res){cout<<x<<" ";}cout<<"\n";
	}
}