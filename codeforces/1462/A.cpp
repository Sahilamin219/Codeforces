#include <bits/stdc++.h>
#define int long long
using namespace std;
typedef vector<int> vi;
struct hash_pair {
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return (hash1 ^ hash2);
    }
};
const int maxn = (2e5 + 5);
void solve_me()
{
	int n;cin>>n;
	// string s;cin>>s;
	vector<int> v(n);
	for(int &i:v)cin>>i;
	int i=0, j=n-1, x=1;
	while(n--)
	{
		if(x)
		{
			cout<<v[i++]<<" ";
		}
		else
		{
			cout<<v[j--]<<" ";
		}
		x^=1;
	}cout<<"\n";
	return;
}

int32_t main( )
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