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
#define resultv(v) accumulate(all(v),int(0))
#define removeDuplicates(a) a.resize(unique(all(a))-a.begin())
#define productv(v) accumulate(all(v), int(1), multiplies< int >())
#define difference(v) accumulate(all(v), int(0), std::minus< int >())
#define vi vector<int> 
#define pii pair<int, int> 
#define vvi vector<vi>
#define vpii vector<pii>
#define INF 0x3f3f3f3f
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
#define MAX_SIZE 12

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
inline int32_t add(int a, int b) { return a + b >= mod ? a + b - mod : a + b; }
inline int32_t mul(int a, int b) { return (a * 1ll * b % mod); }
inline void inc(int& a, int b) { a = add(a, b); }
int mpow(int n, int p)
{
	int res=1;
	while(p)
	{
		if(p&1)(res*=n)%=mod;
		(n*=n)%=mod,p/=2;
	}
	return res;
}

void solve(){
	int n;cin>>n;
	vi a(n), b(n), c(n);
	for(int i=0;i<n;i++)cin>>a[i]>>b[i]>>c[i];
	vector<array<int, 3>> dp(n);
	dp[0][0]=a[0];
	dp[0][1]=b[0];
	dp[0][2]=c[0];
	// cout<<max({dp[0][0],dp[0][1],dp[0][2]} )<<" ";
	for(int i=1;i<n;i++){
		if(i==1){
			dp[i][0] = max( dp[i-1][1] + a[i] , dp[i-1][2] + a[i]);
			dp[i][1] = max( dp[i-1][0] + b[i] , dp[i-1][2] + b[i]);
			dp[i][2] = max( dp[i-1][0] + c[i] , dp[i-1][1] + c[i]);
		}
		else{
			dp[i][0] = max({dp[i-2][0] + a[i], dp[i-1][1] + a[i] , dp[i-1][2] + a[i]});
			dp[i][1] = max({dp[i-2][1] + b[i], dp[i-1][0] + b[i] , dp[i-1][2] + b[i]});
			dp[i][2] = max({dp[i-2][2] + c[i], dp[i-1][1] + c[i] , dp[i-1][0] + c[i]});
		}
		// cout<<max({dp[i][0],dp[i][1],dp[i][2]} )<<" ";
	}
	cout<<max({dp[n-1][0],dp[n-1][1],dp[n-1][2]} );

}

int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	solve();
	return 0;
}