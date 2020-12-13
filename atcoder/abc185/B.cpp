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
ll nCr(ll n, ll r) 
{ 
    ll fac[1000006] = {1} ; 
      
    for (ll i = 1 ; i < n + 1 ; i++) 
    { 
        fac[i] = fac[i - 1] * i ; 
    } 
      
    ll ans = fac[n] / (fac[n - r]*fac[r]) ; 
    return ans ; 
} 
void solve()
{
	// ll n;cin>>n;
	// cout<<nCr(n-1,11);	
	ll n,m,t;cin>>n>>m>>t;
	vector<pair<ll,ll>> p(m+1);
	p[0] = {0,0};
	for(int i=1;i<=m;i++)cin>>p[i].first>>p[i].second;
	ll flag=1, c=n;
	for(int i=1;i<=m;i++)
	{
		c = max(0ll, c-(p[i].first - p[i-1].second) );
		if(c==0){cout<<"No\n";return;}
		// cout<<c<<" ";
		c = min( c + (p[i].second - p[i].first), n);
		// cout<<c<<" ";
	}
	c = max(0ll, c-( t- p[m].second) );
	// cout<<c<<" ";
	if(c==0){cout<<"No\n";return;}
	cout<<"Yes\n";
}
int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int Test_me=1; //cin>>Test_me;
	for(int i=0;i<Test_me;i++){
		solve();
	}
	return 0;   
}
// Given a connect Directed Graph,
// find the minimum number of edge required
// to make every vertex reachable from each other,
// Important
// the condition given that you can only add edge u to v if there is an edge from v to u already exist.

