#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define pb push_back
#define pl pair<ll, ll>
#define vi vector<ll>
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
const ll maxn = ll(1e6+6);
void showdq(deque<pair<int, int>> d){for(auto x:d){cout<<"{"<<x.first<<","<<x.second<<"}";}cout<<"\n";}
void solve(){
	ll n,i,j,k;cin>>n;
	vi v(n), h(n);cin>>v;
	ll d=0;
	h[0]=0;
	h[v[1]-1]=1;
	for(i=1;i<n;i++)
	{
		if(v[i] < v[i-1]) d++;
		h[i]=h[d]+1;
	}
	cout<<h[n-1]<<"\n";
}
int32_t main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	ll T = 1;
	cin >> T;
	while (T--)solve();
}