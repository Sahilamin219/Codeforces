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
vi level(maxn, 0);
void find(vi tr[], int node, int par)
{
	for(int i: tr[node])
	{
		if(i!=par)
		{
			level[i] = level[node] + 1;
			find(tr, i, node);
			// cout<<level[i]<<" ";
		}
	}
}
void solve(){
	level.resize(maxn);
	level[1]=1;
	ll n,i,j,k;cin>>n;
	vi v(n);cin>>v;
	ll d=1;
	// zab tk asc h same hgt mai dalna chahiye
	vector<ll> tr[n+1];
	tr[1].push_back(v[1]);
	// tr[v[1]].push_back(1);
	for(i=2;i<n;i++)
	{
		if(v[i] > v[i-1]) tr[v[d-1]].push_back(v[i]) ,tr[v[i]].push_back(v[d-1]);
		else d++, tr[v[d-1]].push_back(v[i]) ,tr[v[i]].push_back(v[d-1]);;
	}
	find(tr, 1, -1);
	cout<<*max_element(all(level)) - 1<<"\n";
	level.clear();
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
int32_t main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	ll T = 1;
	cin >> T;
	while (T--)solve();
}
/*
a = [] # the order in which vertices were processed
q = Queue()
q.put(1) # place the root at the end of the queue
while not q.empty():
    k = q.pop() # retrieve the first vertex from the queue
    a.append(k) # append k to the end of the sequence in which vertices were visited
    for y in g[k]: # g[k] is the list of all children of vertex k, sorted in ascending order
        q.put(y)
*/