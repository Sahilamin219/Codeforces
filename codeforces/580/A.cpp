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
// find indegree and outdegree
// Sheet reduces the magnetic strength by an additional one so simply add an extra position near the sheet.
// This will automatically reduce the strength by one. So create a new string adding an additional sheet 
// whenever it is encountered. We will now work on the new string.
void solve()
{
    ll n;cin>>n;
    vi v(n) ,lf(n,1);
    Fo(i,0,n)cin>>v[i];
    Fo(i,1,n)
    {
        if(v[i]>=v[i-1])lf[i]=lf[i-1]+1;
    }
    cout<<*max_element(all(lf));
}
int main(int argc, char const *argv[]){
    solve();
    return 0;
}