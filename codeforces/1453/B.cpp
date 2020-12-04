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


template <typename T, typename TT>
inline ostream &operator<<(ostream &os, const pair<T, TT> &t) {
	return os << t.first << " " << t.second;
}
template <typename T>
inline ostream &operator<<(ostream &os, const vector<T> &t) {
	for (auto i : t) os << i << " ";
	return os;
}
template <typename T>
inline ostream &operator<<(ostream &os, const set<T> &t) {
	for (auto i : t) os << i << " ";
	return os;
}
template <typename T1, typename T2>
inline ostream &operator<<(ostream &os, const map<T1, T2> &t) {
	for (auto i : t) os << i.first << " : " << i.second << endl;
	return os;
}
template <typename T>
inline istream &operator>>(istream &is, vector<T> &v) {
	for (T &t : v) is >> t;
	return is;
}
template <typename T1, typename T2>
inline istream &operator>>(istream &is, vector<pair<T1, T2>> &v) {
	for (pair<T1, T2> &t : v) is >> t.first >> t.second;
	return is;
}
const int maxn = ll(1e6+20);

bool bin_search(int x[], int n, int k) {
	int p = 0;
	for (int a = n; a >= 1; a /= 2) {
		while (p+a < n && x[p+a] <= k) p += a;
	}
	return x[p] == k;
}

int dp[5010][5010];

void solve()
{
	int n,i=0;cin>>n;
		vector<ll> v(n);
		for(i=0;i<n;i++)cin>>v[i];
		vector<ll> dp(n+1,0);
		ll ans=0;
		for(i=0;i<n;i++)
		{
			if(i>0 and i<n-1)
			{
				ans = max(ans, abs(v[i+1] - v[i]) + abs(v[i-1] - v[i]) - abs(v[i+1] - v[i-1]));
			}
			else if(i==0)
			{
				ans = max(ans, abs(v[i+1] - v[i]) )  ;
			}
			else if(i==n-1)
			{
				ans = max(ans, abs(v[i-1] - v[i]) );
			}
		}
		ll dif=0;
		for(i=0;i<n-1;i++)dif+=abs(v[i+1]- v[i]);
		cout << dif - ans<< "\n";
}
int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int Test_me=1;cin>>Test_me;
	for(int i=0;i<Test_me;i++){
		solve();
	}
	return 0;   
}