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

void solve_me()
{
	int n;cin>>n;
	int a=0,b=0;
	for(int i=0;i<n;i++)
	{
		int vl;cin>>vl;
		if(vl==1)a++;
		else b++;
	}
	if( (a + 2*b)%4 == 0)cout<<"YES\n";
	else if( (a + 2*b)%2 == 0 and a)cout<<"YES\n";
	else cout<<"NO\n";
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