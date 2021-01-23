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
const string T = "abacaba";
int n;string s;
bool check_me(string str)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(str.substr(i, 7) == T)
		{
			count++;
		}
	}
	if(count > 1)
	{
		return false;
	}
	return true;
}

void solve_me()
{
	cin>>n;
	cin>>s;
	// vector<int> v(n);
	// for(int &i:v)cin>>i;
	// int i=0, j=n-1, x=1;
	for(int i=0;i<=n-7;i++)
	{
		string duplicate=s;
		bool possible=true;
		for(int j=0;j<7;j++)
		{
			if(s[i+j] != '?' and s[i+j] != T[j])
			{
				possible=false;
				break;
			}
			else duplicate[i+j]=T[j];
		}
		if(not possible)
		{
			continue;
		}
		if(possible and check_me(duplicate))
		{
			for(int x=0;x<n;x++)
			{
				if(duplicate[x]=='?')
				{
					duplicate[x]='z';
				}
			}
			cout<<"YES\n";
			cout<<duplicate<<"\n";return;
		}
	}
	cout<<"NO\n";
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