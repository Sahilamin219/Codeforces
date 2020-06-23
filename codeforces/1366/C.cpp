#include <bits/stdc++.h>
#define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
// ll n,m,k;
// vector<string> str;
// set<int> s;
// int dp[101][100001];
// int get(vector<int> v,int ind,int sum)
// {
// }
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		vector<vector<int>> v(n,vector<int> (m,0));
		vector<int> a(n+m,0);
		vector<int> b(n+m,0);
		f(i,0,n)
		{
			f(j,0,m)
			{
				cin>>v[i][j];
				if(v[i][j]){
					a[i+j]++;
				}
				else{
					b[i+j]++;
				}
			}
		}
		int ans=0;
		int l=(n+m-2)/2;
		f(i,0,l+1){
			if(i!=l or (n+m)%2!=0){
				int x=a[i]+a[m+n-2-i];
				int y=b[i]+b[m+n-2-i];
				ans+=min(x,y);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
// cout.flush();
// fflush(stdout);