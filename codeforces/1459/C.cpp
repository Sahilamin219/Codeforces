#include "bits/stdc++.h"
#define pb push_back
#define mkp make_pair
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

#define zrobits(x)	__builtin_ctzll(x)
#define bitcount	__builtin_popcountll
#define ps(x,y)		fixed<<setprecision(y)<<x
#define negmod(X,Y) X % Y + (X %  Y < 0 ? Y : 0)
#define flip_bits(number) static_cast<unsigned>(~number) 
using namespace std;
typedef long long int ll;
#define resultv(v) accumulate(all(v),ll(0))
#define removeDuplicates(a) a.resize(unique(all(a))-a.begin())
#define productv(v) accumulate(all(v), ll(1), multiplies< ll >())
#define difference(v) accumulate(all(v), ll(0), std::minus<ll>())
#define vi vector<ll> 
#define pii pair<ll, ll> 
#define vvi vector<vi>
#define vpii vector<pii>
#define INF 0x3f3f3f3f
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
#define MAX_SIZE 12

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
inline int add(int a, int b) { return a + b >= mod ? a + b - mod : a + b; }
inline int mul(int a, int b) { return int(a * 1ll * b % mod); }
inline void inc(int& a, int b) { a = add(a, b); }
ll mpow(ll n, ll p)
{
	ll res=1;
	while(p)
	{
		if(p&1)(res*=n)%=mod;
		(n*=n)%=mod,p/=2;
	}
	return res;
}

int R=0, ans=0, n;
vector<vector<int>> dp;
int rec(int i, int sum){
	if(i>n)return 0;
	if(sum>R)return 0;
	if(sum==R){
		return 1;
	}
	if(dp[i][sum]!=-1)return dp[i][sum];
	dp[i][sum]=rec(i+1, sum) + rec(i+1, sum+i);
	return dp[i][sum];
}

void solve(){ 
	ll n, m;cin>>n>>m;
	vi a(n), b(m);
	for(auto &i:a)cin>>i;
	for(auto &i:b)cin>>i;
	sort(all(a));
	ll preGCD = a[1]-a[0];
	if(n==1){
		preGCD=0;
	}
	for(ll i=2;i<n;i++){
		ll k=a[i]-a[0];
		preGCD = __gcd(preGCD, k);
	}
	for(auto x:b){
		ll k=a[0] + x;
		cout<<abs(__gcd(preGCD,k))<<" ";
	}
	return;
	string vl;
	multiset<string> s;
	for(ll i=0;i<n;i++){
		cin>>vl;
		s.insert(vl);
	}
	vector<string> pre, suf;
	string mid="";
	ll ans=0;
	for(auto x:s){
		string c=x;
		reverse(all(c));
		if(c==x){
			mid+=c;
			s.erase(c);
			continue;
		}
		if(s.find(c)!=s.end()){
			pre.push_back(x);
			suf.push_back(c);
			s.erase(c);
			s.erase(x);
			ans += (2*x.size());
		}
	}
	reverse(all(suf));
	cout<<ans+mid.size()<<"\n";
	for(auto x:pre)cout<<x;
		cout<<mid;
	for(auto x:suf)cout<<x;

	/*int n, c;cin>>n>>c;
	multiset<int> ms;
	int sum=0;
	vector<int> dp(n+1);
	vector<int> v(n);
	for(auto &i:v)cin>>i;

	for(int i=1;i<=n;i++){
		sum += v[i-1];
		ms.insert(v[i-1]);
		if(i>c){
			sum -= v[i-c-1];
			ms.erase(ms.find(v[i-c-1]));
		}
		dp[i] = dp[i-1] + v[i-1];
		if( i - c >= 0){
			dp[i] = min( dp[i] , dp[i-c] + sum - *ms.begin() );
		}
	}
	cout<<dp[n]<<"\n";*/
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	solve();
	return 0;
}