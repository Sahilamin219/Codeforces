#include <bits/stdc++.h>
#include <string_view>
#define Sz(a) long (a.size())
#define Fo(i,a,b) for(long long int i=a;i<b;i++)
#define Re(i,a,b) for(long long int i=a;i>b;i--)
#define pb push_back
#define mkp make_pair
#define mod 1000000009
#define MAX 100001
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cerr<< #x << ':' << x << endl;
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
class Node {
public:
	int val;
	vector<Node*> children;

	Node() {}

	Node(int _val) {
		val = _val;
	}

	Node(int _val, vector<Node*> _children) {
		val = _val;
		children = _children;
	}
};
const int maxn = 2e5;
int N;
long long ans;
vector<long long> subtree;
vector<vector<int>> graph;

long long computeSubtree(int node, int parent) {
	subtree[node] = 1;
	for(auto i : graph[node]) {
		if(i == parent) continue;
		subtree[node] += computeSubtree(i, node);
	}
	return subtree[node];
}

void dfs(int node, int parent, long long sum_of_sub_of_ansector) {
	long long value = sum_of_sub_of_ansector + subtree[node];
	int child = 0;
	for(auto i : graph[node]) {
		if(i == parent) continue;
		child ++;
		dfs(i, node, value);
	}
	if(child == 0) {
		ans = max(ans, value); // Here checking for the leaf, though there is no need for checking for the leaf as the value for the leaf will be greater.
	}
}
void solve()
{
	ll n,k;cin>>n>>k;
	vi v(n);
	// map<ll,ll> m;
	set<ll> s;
	Fo(i,0,n)cin>>v[i], s.insert(v[i]);
	auto i=s.begin();
	ll ans=INT_MAX;
	for(;i!=s.end();i++)
	{
		ll colr=*i;
		vi a;
		Fo(j,0,n)
		{
			if(v[j]!=colr)a.pb(j);
		}
		ll loc=0;
		// a.pb(colr);
		// for(auto y:a){cout<<y<<" ";}cout<<"--";
		ll j =0,x = 0;
		while (j<a.size()){
			// x=j;
			while(x<a.size()  and a[x] - a[j] +1 <= k)x++;
			loc++;
			j=x;
		}
		// Fo(j,0,a.size())
		// {
		// 	ll x=j;
		// 	while(j<a.size() and a[j]-a[x]+1 < k)j++;
		// 	loc++;	
		// 	cout<<a[x]<<" "<<a[j]<<"\n";
		// }
		ans=min(ans, loc);
	}
	cout<<ans<<"\n";
}
// The median in the example is equal to 3 and there is NO mistake.
// (n/2) = (6/2) = 3
// The sorted order of the numbers is [1, 2, 3, 4, 5, 6]. The element on position 3 in this order is 3.
int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int t=1;cin>>t;
	while(t--)solve();
	return 0;
}//Sprague-Grundy Theorem is a waste
/*
Given a string S and a set of n substrings. Remove every instance of those n substrings from S so that S is of the minimum length and output this minimum length.

Example 1

S = ccdaabcdbb
n = 2
substrings = ab, cd

Output

2

Explanation:

ccdaabcdbb -> ccdacdbb -> cabb -> cb (length=2)

Example 2

S = abcd
n = 2
substrings = ab,bcd

Output

 1

How do I solve this problem ?




The following solution would have an complexity of O(m * n) where m = len(S) and n is the number of substring

def foo(S, sub):
	i = 0
	while i < len(S):
		for e in sub:
			if S[i:].startswith(e):
				S = S[:i] + S[i+len(e):]
				i -= 1
				break
		else: i += 1
	return S, i

https://www.hackerearth.com/challenges/competitive/data-structures-and-algorithms-coding-contest-november-2020/problems/
*/