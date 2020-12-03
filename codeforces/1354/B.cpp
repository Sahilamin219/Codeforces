#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int32_t main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int t;cin>>t;
	while(t--)
	{
		string s;cin>>s;
		int dp[3]={0};
		int ans=INT_MAX;
		s="#"+s;//bcuz i=0 at starting
		for(int i=0;i<s.size();i++)
		{
			dp[s[i]-'1']=i;
			int cnt=0;
			for(int j=0;j<=2;j++)
			{
				if(dp[j])cnt++;
			}
			if(cnt!=3)continue;
			ans = min(ans, i+1 - min( {dp[0], dp[1], dp[2] } ));
		}
		cout<<(ans == INT_MAX ? 0 : ans)<<"\n";
	}
}