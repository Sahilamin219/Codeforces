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
// Dirichlet principle,
void solve()
{
	int n;cin>>n;
	vector<ll> v(n);
	map<int, int> m;
	for(int i=0;i<n;i++)cin>>v[i],  m[v[i]]=i;
	string s="1";
	set<ll> st;
	st.insert(1);
	int j=m[1]-1, k=m[1]+1;
	for(int i=2;i<=n;i++)
	{
		while( j>=0 and v[j] <= i )st.insert(v[j--]);
		while( k<n and v[k] <= i )st.insert(v[k++]);
		if(st.size() == i)s+='1';
		else s+='0';
	}
	cout<<s<<"\n";
}
int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	ll T=1, i=0, j=0, k=0; cin>>T;
	while(T--){
		solve();
	}
}
// better you fuck or dry run using pen and paper