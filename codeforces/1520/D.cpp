#include<iostream>
#include<iomanip>
#include<queue>
#include<stack>
#include<numeric>
#include<cstring>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<climits>
#include<cmath>

using namespace std;
#define int long long
#define pp pair<int,int>
#define ppl pair<ll,ll> 
#define mod 1000000007

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		int ans=0;
		map<int, int> freq;
		
		for (int i=1;i<=n;i++)
		{
			int d;
			cin>>d;

			freq[d-i]++;
		}

		for (auto it:freq)
		{
			int num=freq[it.first];
			ans+= (num*(num - 1))/2;
		}

		cout<<ans<<'\n';

	}

	return 0;
}