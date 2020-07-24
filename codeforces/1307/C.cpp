#include <bits/stdc++.h>
#define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
using namespace std;
typedef long long int ll;
int32_t main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string s;
	cin>>s;
	ll ans=0;
	ll n=s(s);
	vector<vector<ll>> dp2(26,vector<ll> (26,0));
	vector<ll> dp1(26,0);
	f(i,0,n)
	{
		ll k=s[i]-'a';
		f(j,0,26)
		{
			dp2[j][k]+=dp1[j];
		}
		dp1[k]++;
	}
	f(i,0,26){ans=max(ans, dp1[i]);}
	f(i,0,26)
	{
		f(j,0,26)
		{
			ans=max(ans, dp2[i][j]);
		}
	}
	cout<<ans;	
	return 0;
}