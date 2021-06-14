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
#define ll long long
#define pp pair<int,int>
#define ppl pair<ll,ll> 
#define mod 1000000007

int numOfFactors (int num)
{
	int factors = 0;
	for (int i = 2; i * i <= num; i++)
	{
		while (!(num % i))
		{
			factors++;
			num /= i;
		}
	}

	if (num > 1)
		factors++;

	return factors;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;

	while(t--)
	{
		int a, b, k;
		cin >> a >> b >> k;

		if (a == 1 && b == 1)
			cout << "NO\n";

		else
		{
			int minK = 2;
			if (a == 1 || b == 1 || (a != b && __gcd (a, b) == min (a, b)))
				minK--;

			int maxK = 0;
			maxK = numOfFactors (a);
			maxK += numOfFactors (b);

			if (k >= minK && k <= maxK)
				cout << "YES\n";

			else
				cout << "NO\n";
		}	
	}

	return 0;
}