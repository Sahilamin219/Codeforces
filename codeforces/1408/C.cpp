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
typedef long double ld;
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
pair<ld,ld> car_xi(ld time, vector<ld> a)
{
	ld i=1, loca=0, v1=1 ,v2=1;
	while(loca  + (a[i] - a[i-1])/v1 < time and i<a.size())
	{
		loca += (a[i] - a[i-1])/v1++;
		i++;
	}
	ld x1=0,x2=0;
	x1 = a[i-1] + (time-loca)*v1;
	loca=0;i=a.size()-2;
	while(loca + (a[i+1] - a[i])/v2 < time and i>=0)
	{
		loca += (a[i+1] - a[i])/v2++;
		i--;
	}
	x2 = a[i+1] - (time-loca)*v2;
	return {x1,x2};
}
void solve()
{
	ll flags;
	ld length;
	cin>>flags>>length;
	vector<ld> a(flags+2,0);
	Fo(i,1,flags+1)cin>>a[i];
	a[flags+1]=length;
	ld time = 0, high=length, low=0;
	ll CASE=100;
	while(CASE--)
	{
		time = (high+low)/2;
		pair<ld,ld> p1 =car_xi(time, a);
		if( abs(p1.first - p1.second) <= 1e-6 ){break;}
		if(p1.first > p1.second)high=time;
		else low=time;
	}
	printf("%0.10Lf\n", time);
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