#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
	ll n,m;cin>>n>>m;
	vector<string> v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	ll ans=0;
	vector<vector<ll>> s(n, vector<ll> (m,0));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(j==0) {s[i][j] = (v[i][j] == '*'); continue;}	
			if(v[i][j] == '*'){
				s[i][j] += s[i][j-1] + 1;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(v[i][j] == '*')
			{
				ans++;
				ll di=1, dj=1, flag=1;
				if(i+di >= n){ flag=0; continue; }
				while( i+di < n and (j-dj >=0 and j+dj < m) and v[i+di][j] == '*' and flag)
				{
					ll start=j-dj, end = j+dj;
					flag=0;
					if(  v[i+di][start] == '*' and v[i+di][end] == '*' and s[i+di][start] - s[i+di][end] == -2*dj )flag=1;
					if(flag)ans++, dj++, di++;
					else { break;}
				}
			}
		}
	}
	cout<<ans<<"\n";
}
int main(){
	int Testcase=1;cin>>Testcase;
	while(Testcase--)solve();
	return 0;
}