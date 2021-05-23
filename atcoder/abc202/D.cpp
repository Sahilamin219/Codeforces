#include "bits/stdc++.h"
#define pb push_back
#define mkp make_pair
#define int long long

#define mod 1000000007
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

#define zrobits(x)	__builtin_ctzll(x)
#define bitcount	__builtin_popcountll(x)
#define ps(x,y)		fixed<<setprecision(y)<<x
#define negmod(X,Y) X % Y + (X %  Y < 0 ? Y : 0)
#define flip_bits(number) static_cast<unsigned>(~number) 
using namespace std;

void solve(){
	int n, m, k;cin>>n>>m>>k;
	int dp[n+1][m+1];
	memset(dp, 0, sizeof(dp));
	dp[0][0]=1;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i>0){
				dp[i][j] += dp[i-1][j];
			}
			if(j>0){
				dp[i][j] += dp[i][j-1];
			}
		}
	}
	string Result="";
	int A=n, B=m;
	for(int i=0;i<n+m and (A>0 and B>0);i++){
		if( k <= dp[A-1][B]){
			Result+='a';
			A-=1;
		}
		else{
			k-=dp[A-1][B];
			Result+='b';
			B-=1;
			//B-=1 after subtracting from K
		}
	}
	cout<<Result;
	cout<<string(A, 'a');
	cout<<string(B, 'b');
}

int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	solve();
}