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
	int n,x;cin>>n>>x;
	vi v(n);int i=0;
	for(;i<n;i++)cin>>v[i];
	ll ans=0;
	int end=0, sum=0;
	while(end<n and v[end]%x==0)sum += v[end++];
	int flag=1, times=1;
	vi cnt(n);
	for(i=0;i<n;i++)
	{
		ll l=0, vl=v[i];
		while(vl%x == 0)vl/=x, l++;
		cnt[i]=l;
	}
	times = *min_element(cnt.begin(), cnt.end());
	for(int z=0;z<n;z++)
	{
		// if(v[z]%x!=0)
		// {
		// 	while(z<n)
		// 	{
		// 		ans += v[z++];
		// 	}
		// 	cout<<ans<<"\n";
		// 	return;
		// }
		// ll times=0, vl=v[z];
		// times += floor(logx(v[z], x));
		// while(vl%x==0)vl/=x, times++;
		// cout<<times<<" ";
		if(cnt[z]==times)flag=0;
		ans += v[z]*(times + 1 + flag);
	}
	cout<<ans<<"\n";
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