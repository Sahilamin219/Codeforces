#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define pb push_back
#define pl pair<ll, ll>
#define vl vector<ll>
#define vi vector<int>
#define endl '\n'

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
const ll mod = 1e9 + 7;
void showdq(deque<pair<int, int>> d){for(auto x:d){cout<<"{"<<x.first<<","<<x.second<<"}";}cout<<"\n";}

int left_most(const vi &arr, int n, int x)
{
	int ans=n;
	int lo=0, hi=n-1;
	while(lo <= hi)
	{
		int m=(lo + hi )>>1;
		if(arr[m] >= x)hi=m-1, ans=m;
		else lo=m+1;
	}
	return ans;
}

int right_most(const vi &arr, int n, int x)
{
	int ans=-1;
	int lo=0, hi=n-1;
	while( lo <= hi )
	{
		int m=(lo + hi )>>1;
		if( arr[m] <= x)lo=m+1, ans=m;
		else hi=m-1;
	}
	return ans;
}

void solve(){
	ll n;cin>>n;
	vi v(n);cin>>v;
	sort(all(v));
	ll ans=INT_MAX, i=0, k=0;
	for(i=0;i<n;i++)
	{
		ll x = v.end() - upper_bound(all(v), 2*v[i]);
		ans = min(ans, x+ k);k++;
	}
	cout<<ans;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	ll T = 1;
	// cin >> T;
	while (T--) {
		solve();
	}
	return 0;
}
