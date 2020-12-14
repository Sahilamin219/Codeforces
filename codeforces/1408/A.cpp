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
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) {return (a.second < b.second);}

static bool mysort(pair<int, int>& a, pair<int, int>& b){ return a.second==b.second?a.first<b.first:a.second<b.second;}
template<typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;
struct cmp {
	bool operator() (pair<int, int> a, pair<int, int> b) {
		 return a.first+a.second > b.first+b.second;
	}
};
bool bin_search(int x[], int n, int k) {
	int p = 0;
	for (int a = n; a >= 1; a /= 2) {
		while (p+a < n && x[p+a] <= k) p += a;
	}
	return x[p] == k;
}
void solve()
{
	ll n,i,j;cin>>n;
	vi a(n), b(n), c(n);
	Fo(i,0,n)cin>>a[i];
	Fo(i,0,n)cin>>b[i];
	Fo(i,0,n)cin>>c[i];
	vector<array<ll,3>> v(n);
	for(i=0;i<n;i++)
	{
		v[i][0] = a[i];
		v[i][1] = b[i];
		v[i][2] = c[i];
	}
	vector<ll> ans(n);
	ans[0]=v[0][0];ll cnt=0;
	for(i=1;i<n;i++)
	{
		if(i!=n-1)while(v[i][cnt] == ans[i-1])cnt++, cnt%=3;
		else while(v[i][cnt] == ans[0] or v[i][cnt] == ans[i-1])cnt++, cnt%=3;
		ans[i] = v[i][cnt];
	}
	for(auto x: ans){cout<<x<<" ";}cout<<"\n";
}

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int testcases;cin>>testcases;
	while(testcases--)solve();
}
// Given a connect Directed Graph,
// find the minimum number of edge required
// to make every vertex reachable from each other,
// Important
// the condition given that you can only add edge u to v if there is an edge from v to u already exist.

// void saifu(ll node, ll p)
// {
// 	vector<ll> others;
//     if(others.max_size()>0)
// 	    if(p!=-1) others.push_back(n-sub);
// 	    for(int i=1;i<=n;i++) dp2[i] = 0;
// 	    dp2[0] = 1;
// 	    for(int each : others){
// 	        for(int i=n-each;i>=0;i--){
// 	            if(dp2[i]==1) dp2[i+each]=1,dp[i+each]=1;
// 	        }
// 	    }
// }