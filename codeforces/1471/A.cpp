#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
struct hash_pair {
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
void solve_me()
{
	int n,x;cin>>n>>x;
	vi v(n);int i=0;
	ll sum=0, ans=0;
	for(;i<n;i++)cin>>v[i], sum += v[i];
	cout << (sum+x-1)/x<<" ";
	for(i=0;i<n;i++)ans += (v[i]+x-1)/x;
	cout << ans <<"\n";
	return;
}
int main( int argc, char const *argv[] ) 
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	int tt = clock();
	#endif
	// cout << fixed << setprecision(18);
	int Testcase=1;assert(cin>>Testcase);
	while(Testcase--)solve_me();
	#ifndef ONLINE_JUDGE
		cerr << "TIME = " << clock() - tt << endl;
		tt = clock();
	#endif
	return 0;
}