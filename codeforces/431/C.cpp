#include <bits/stdc++.h>
#define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define fi first
#define se second
#define pb push_back
#define mkp make_pair
#define pi pair<long long int,long long int>
#define mapi map<long long int,long long int>
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define lcm(a,b) ((a*b)/__gcd(a,b))
#define zrobits(x)	__builtin_ctzll(x)
#define bitcount    __builtin_popcountll
#define ps(x,y)		fixed<<setprecision(y)<<x
#define negmod(X,Y) X % Y + (X %  Y < 0 ? Y : 0)
#define flip_bits(number) static_cast<unsigned>(~number) 
#define print() cout<<"\n";
#define debug(x) cout<< #x << ':' << x << endl;
#define show(x) cout<<x<<endl;
#define pret(x) cout<<x<<endl; return 0;
#define disp(x) cout<<x<<" ";
#define let(x,y) cout<<x<<" "<<y<<endl;
using namespace std;
typedef long long int ll;
#define vi(v,n) vector<long long int> v(n)
#define vvi(v,n,m) vector<vector<long long int> > v(n, vector<long long int> (m,0));
#define INF 0x3f3f3f3f;
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
void add(ll &a,  ll b)
{
	a+=b;
	if(a>mod){a-=mod;}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//freopen("error.txt", "w", stderr);
	#endif
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll n,k,d;cin>>n>>k>>d;
	vector<vector<ll>> dp(102,vector<ll> (2,0));
	dp[0][0]=1;
	dp[0][1]=0;
	f(i,1,n+1)
	{
		f(j,1,k+1)
		{
			if(i-j<0)break;
			if(j<d)
			{
				add(dp[i][0],dp[i-j][0]);
				add(dp[i][1],dp[i-j][1]);
			}
			else
			{
				add(dp[i][1],dp[i-j][0]);
				add(dp[i][1],dp[i-j][1]);
			}
		}
	}
	cout<<dp[n][1];
	return 0;
}