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
        return (hash1 ^ hash2);
    }
};

static bool mysort(const pair<int, int> a, const pair<int, int> b)
{
	if(a.first==b.first)
		return a.second < b.second;
	return a.first>b.first;
}

void solve_me()
{
	ll n,x;cin>>n>>x;
	vi v(n);
	ll i=0, flag=0;
	ll c=0;
	for(;i<n;i++){
		cin>>v[i];
		if(v[i]<x)c++;
		if(v[i]==x)flag=1;
	}
	cout<<(x - c ) + flag;
	cout<<"\n";
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
	int Testcase=1;//assert(cin>>Testcase);
	while(Testcase--)solve_me();
	#ifndef ONLINE_JUDGE
		cerr << "TIME = " << clock() - tt << endl;
		tt = clock();
	#endif
	return 0;
}