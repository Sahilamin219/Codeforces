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
const ll maxn = ll(1e5+6);
void showdq(deque<pair<int, int>> d){for(auto x:d){cout<<"{"<<x.first<<","<<x.second<<"}";}cout<<"\n";}
void solve(){
	ll n,i;cin>>n;
	vi v(n);
	ll xor_ =0;
	for (auto &ele : v) {
    		cin>>ele;
    		xor_ ^= ele;
    	}
	if(xor_ and !(n&1) ){cout<<"NO";return;}
	cout<<"YES\n";
	if(n%2 == 0)n--;
	i=1;
	vector<vl> answer;
	while(i+2<=n)
	{
		answer.push_back({i, i+1, i+2});i+=2;
	}
	if(n&1)
	{
		i=1;
		while(i<n-2)answer.push_back({i,i+1,n}), i+=2;
	}
	cout<<answer.size()<<"\n";
	for(auto x:answer)cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	ll T = 1;
	// cin >> T;
	while (T--) {
		solve();
	}
	return 0;
}
