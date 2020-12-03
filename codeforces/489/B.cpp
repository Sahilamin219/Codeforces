#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int32_t main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int T=1,i,j;//cin>>T;
	while(T--)
	{
		int n;cin>>n;
		vector<int> a(n);for(i=0;i<n;i++)cin>>a[i];
		int m;cin>>m;
		vector<int> b(m);for(i=0;i<m;i++)cin>>b[i];
		auto solve = [&](vector<int> a, vector<int> b)->int
		{
			sort(a.begin(), a.end());
			sort(b.begin(), b.end());
			int ans=0; i=0; j=0;
			while(i<n and j<m)
			{
				if( abs(a[i] - b[j]) <= 1)ans++, i++, j++;
				else if(a[i] > b[j])j++;
				else i++;
			}
			return ans;
		};
		int ans=solve(a,b);
		cout<<ans;
	}
}