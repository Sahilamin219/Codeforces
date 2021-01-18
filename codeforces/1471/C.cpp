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

int logx(ll val, ll base)
{
	return (log10(val)/log10(base));
}

void solve_me()
{
	int n,m;cin>>n>>m;
	vi k(n), c(m);
	for(int i=0;i<n;i++)cin>>k[i];
	for(int i=0;i<m;i++)cin>>c[i];
	ll cost=0;
	// already sorted ..good
	//use upper_bound ?
	sort( k.rbegin(), k.rend());
	vi chk(m, 1);
	ll last = 0;
	for(int i=0;i<n;i++)
	{
		// if 0 true
		// last record rkhte hai ?
		// last = upper_bound(c.begin(), c.begin() + k[i], last ) - c.begin();
		// int index = lower_bound(chk.begin(), c.end(), 1) - chk.begin();
		// if(last <m and last<= k[i]-1 and chk[last])
		// {
		// 	chk[last]=0;
		// 	last=c[last];
		// 	cost += last;
		// }
		// else if(index <= k[i]-1 and chk[index])
		// {
		// 	chk[index]=0;
		// 	last = c[index];
		// 	cost += last;
		// }
		// else
		// {
		// 	cost += c[k[i]-1];
		// }
		// cout<<last<<" ";

		if(last <= k[i]-1 and last<m)cost+=c[last++];
		else cost+=c[k[i]-1];
	}
	cout<<cost<<"\n";
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