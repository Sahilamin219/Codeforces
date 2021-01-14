#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll maxn=(ll)1e5+5;
ll dp[maxn][6][2];
ll n,k,z;
ll v[maxn];
ll reucrsive(ll index , ll left_moves, ll total_moves, ll flag )
{
	ll& tmp_ans = dp[index][left_moves][flag];
	if(total_moves > k ) return 0;
	if(tmp_ans != -1)return tmp_ans;
	ll a=0, b=0; tmp_ans=0;
	a=reucrsive(index+1, left_moves, total_moves+1, 1);
	if(index and flag and left_moves < z)b=reucrsive(index-1, left_moves+1, total_moves+1, 0);
	tmp_ans = max(a,b) + v[index];
	return tmp_ans;
}
void solve_me()
{
	ll maxi=0, ans=0;
	cin>>n>>k>>z;
	for(ll i=0;i<n;i++)cin>>v[i];

	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=5;j++)
		{
			for(int x=0;x<=1;x++)
			{
				dp[i][j][x]=-1;
			}
		}
	}
	cout << reucrsive(0, 0, 0, 0)<< "\n";
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int Testcase=1;assert(cin>>Testcase);
	while(Testcase--)solve_me();
	return 0;
}