#include <bits/stdc++.h>
#define Fo(i,a,b) for(long long int i=a;i<b;i++)
#define Re(i,a,b) for(long long int i=a;i>b;i--)
#define MAX 200001
#define pb push_back
#define mkp make_pair
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define lb(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define ub(c, x) distance((c).begin(), upper_bound(all(c), (x)))
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
const int maxi = 202;
ll dp[maxi][maxi];
//Initialise array elements with zero
ll nCr(ll n, ll r)
{
       if(n==r) return dp[n][r] = 1; //Base Case
       if(r==0) return dp[n][r] = 1; //Base Case
       if(r==1) return dp[n][r] = n;
       if(dp[n][r]) return dp[n][r]; // Using Subproblem Result
       return dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
}

void solve()
{
	ll n;cin>>n;
	cout<<nCr(n-1,11);
}
int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int Test_me=1;
	for(int i=0;i<Test_me;i++){
		solve();
	}
	return 0;   
}