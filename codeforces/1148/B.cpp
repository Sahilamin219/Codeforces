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
	ll n,m,ta,tb,k;cin>>n>>m>>ta>>tb>>k;
	vi v(n);
	Fo(i,0,n)cin>>v[i];
	vi u(m);
	Fo(i,0,m)cin>>u[i];
	if(k>=min(n,m)){cout<<"-1\n";return;}
	ll i=0,j=0, time=0;ans=0;
	while(k--)
	{
		auto it = lower_bound(all(u), v[i] + ta) - u.begin();
		if(it + k +1 >= m){cout<<"-1\n";return;}
		i++;
		time = u[it+k+1]+tb;
		ans = max(ans, time);
	}
	auto it = lower_bound(all(u), v[i] + ta) - u.begin();
	if(it + k +1 >= m){cout<<"-1\n";return;}
	i++;
	time = u[it+k+1]+tb;
	ans = max(ans, time);
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
	int test=1;//cin>>test;
	while(test--)solve();
	return 0;
}/*
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