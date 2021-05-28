#pragma GCC optimize("O2")
#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
#define int long long int
#define ll long long int
#define ld long double
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define endl '\n'
// __builtin_popcount(x)
#define sp setprecision(15)<<fixed
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
const int mod=1000000007;
const int INF64=mod*mod+1;



void solve(){
	int n;
	cin>>n;

	vector<int> a(n+1);
	for(int i=1;i<=n;i++)
		cin>>a[i];

	vector<vector<int>> dp(n+1,vector<int> (n+1,-INF64));
	for(int i=0;i<=n;i++)
		dp[i][0]=0;

	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			dp[i][j]=dp[i-1][j];
			if(dp[i-1][j-1]+a[i]>=0)
				dp[i][j]=max(dp[i][j],dp[i-1][j-1]+a[i]);

			if(dp[i][j]>=0)
				ans=max(ans,j);
		}
	}
    // DP STORES MAXIMUM HEALTH ON iTH POSITION
	cout<<ans<<endl;
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

	int T=1;
	// cin>>T;
	for(int i=1;i<=T;i++){
		// cout<<"Case #"<<i<<": ";
		solve();
	}
	cerr<<"Time : "<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
}