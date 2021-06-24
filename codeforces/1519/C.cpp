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

bool compare (vector<int> &a, vector<int> &b)
{
	return a.size() > b.size();
}

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

		int u[n];
		int s[n];

		int ss[n + 1];
		for (int i = 0; i < n ;i++)\
			cin>>u[i];

		vector<vector<int> > v(n);

		int total = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> s[i];
			total += s[i];

			v[u[i] - 1].push_back (s[i]);
		}

		for(int i = 0; i < n; i++)
		{
			sort (v[i].begin(), v[i].end());
			for(int j = 1; j < v[i].size(); j++)
				v[i][j] += v[i][j - 1];
		}

		sort (v.begin(), v.end(), compare);

		vector<int> ans (n + 1);
		ans[1] = total;

		int k = 2;
		for (; k <= n; k++)
		{
			int curr = 0;
			for(int i = 0; i < n; i++)
			{
				int sz = v[i].size();

				if (sz < k)
					break;

				if (sz % k)
				{
					int idx = (sz % k);
					idx-- ;
					curr += v[i][sz - 1] - v[i][idx];
				}	

				else
					curr += v[i][sz - 1];
			}

			if (curr == 0)
				break;

			ans[k] = curr;
		}

		for (; k <= n; k++)
			ans[k] = 0;

		for (int i = 1; i <= n; i++)
			cout << ans[i] << " ";

		cout << '\n';
	}

	return 0;
}