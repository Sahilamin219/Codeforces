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
const ll maxn = ll(1e6+6);
void showdq(deque<pair<int, int>> d){for(auto x:d){cout<<"{"<<x.first<<","<<x.second<<"}";}cout<<"\n";}
vi prime(maxn, 1);
void seive()
{
    prime[1]=prime[0]=0;
	ll i=0,j=0;
	for(i=2;i<maxn;i++)
	{
		if(prime[i]==1)
		{
			for(j=i*i;j<maxn;j+=i)prime[j]=0;
		}
	}
	for(i=1;i<maxn;i++)prime[i]+=prime[i-1];
}
ll root(ll n)
{
	ll hi=n, lo=1;
	ll ans=n;
	while(lo <= hi)
	{
		ll m=(lo+hi)/2;
		if(m*m <= n)lo=m+1, ans=m;
		else hi=m-1;
	}
	return ans;
}
void solve(){
	ll n;cin>>n;
	ll root_n = root(n);
	cout<<prime[n] - prime[root_n] + 1<<"\n";	
	// ll n,i;cin>>n;
	// vi v(n);cin>>v;
	// vi a(n);
	// ll maxi=v[0];
	// for(i=1;i<n;i++)
	// {
	// 	if(maxi > v[i])a[i]=0;
	// 	else v[i]=1, maxi=v[i];
	// }
	// // cout<<a;
	// // greedy (n^2) ...same as brute forces
	// //nor dp
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	ll T = 1;
	cin >> T;
	seive();
	while (T--) {
		solve();
	}
	return 0;
}