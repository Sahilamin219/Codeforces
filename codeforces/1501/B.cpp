#include "bits/stdc++.h"
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
void solve(){
    int n;cin>>n;
    vector<int> v(n), res(n, 0);
    for(auto &i:v)cin>>i;
    int left=v[n-1];
    if(v[n-1] > 0)res[n-1] = 1;
    if(left > 0)left--;
    for(int i=n-2;i>=0;i--)
    {
      if(v[i]){
        left=max(left, v[i]);
        left--;
        res[i]=1;
      }
      else if(left>0){
        left--;
        res[i]=1;
      }
    }
    for(auto x:res){
      cout<<x<<" ";
    }cout<<"\n";
}
// The median in the example is equal to 3 and there is NO mistake.
// (n/2) = (6/2) = 3
// The sorted order of the numbers is [1, 2, 3, 4, 5, 6]. The element on position 3 in this order is 3.
int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int test=1;cin>>test;
	while(test--)solve();
	return 0;
}