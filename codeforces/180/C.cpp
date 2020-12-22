#include <bits/stdc++.h>
#define Fo(i,a,b) for(long long int i=a;i<b;i++)
#define Re(i,a,b) for(long long int i=a;i>b;i--) 
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
void solve()
{
	string s;cin>>s;
	int dp[s.size()+2], i=1, flag=0, cnt=0;
	memset(dp, 0, sizeof(dp));
	for( char c : s)
	{
		if(c>='a' and c<='z')flag=1, dp[i]=min(i+1-dp[i-1],dp[i-1]) , cnt++ ;
		else if(flag)dp[i]=min(dp[i-1]+1, cnt) ;
		i++;
	}
	// for(auto x: dp){cout<<x<<" ";}
	// size_t k=*max_element(dp, dp+s.size()+2);
	cout<<dp[s.size()];
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int t=1;//cin>>t;
	while(t--)solve();
	return 0;
}
// long int stol (const string&  str, size_t* idx = 0, int base = 10)
// result = std::accumulate(arr, arr + size, num, std::minus<int>()); 
// int equal(vector<int> arr) {
//	 auto min_ = *min_element(arr.begin(), arr.end());
//	 auto ans = numeric_limits<int>:: max();
//	 for(auto i=0;i<5;i++){
//		 auto operations = [min_,i](auto init, auto j){
//			 auto t = j-(min_-i);
//			 return init + t/5 + t%5/2 + t%5%2;
//		 };
//		 ans=min(ans,accumulate(arr.begin(), arr.end(), 0, operations));
//	 }
//	 return ans;
// }
// pair<long long,int> dfs(int node)
// {
// 	long long mx=0;
// 	int sz=1;
// 	for (int u:v[node])
// 	{
// 		auto tmp=dfs(u);
// 		mx=max(mx,tmp.first);
// 		sz+=tmp.second;
// 	}
// 	return {mx+sz,sz};
// }
// function<void(int,int)>dfs=[&](int i, int d){
// 	if(i==b){
// 		dab=d;return;
// 	}
// 	visited[i]=true;
// 	for(auto it:adj[i]){
// 		if(!visited[it])
// 			dfs(it,d+1);
// 	}
// };
// dfs(a,0);
// int dot=1;
// vector<bool> v(n+1,false);
// function<int(int)>diameter=[&](int i){
// 	int m1=0,m2=0;
// 	v[i]=true;
// 	for(auto it:adj[i]){
// 		if(!v[it]){
// 			int k=diameter(it);
// 			if(k>m1){
// 				m2=m1;
// 				m1=k;
// 			}
// 			else if(k>m2)
// 				m2=k;
// 		}
// 	}
// 	dot=max(m1+m2,dot);
// 	return 1+m1;
// };

void saifu(ll node, ll p)
{
	vector<ll> others;
	int n=10, sub=1;
	int dp[10], dp2[10];
    if(others.max_size()>0){
	    if(p!=-1) others.push_back(n-sub);
	    for(int i=1;i<=n;i++) dp2[i] = 0;
	    dp2[0] = 1;
	    for(int each : others){
	        for(int i=n-each;i>=0;i--){
	            if(dp2[i]==1) dp2[i+each]=1,dp[i+each]=1;
	        }
	    }
	}
}

// Given a connect Directed Graph,
// find the minimum number of edge required
// to make every vertex reachable from each other,
// Important
// the condition given that you can only add edge u to v if there is an edge from v to u already exist.

