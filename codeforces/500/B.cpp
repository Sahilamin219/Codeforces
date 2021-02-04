#include "bits/stdc++.h"
#include <string_view>
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;
// T(n) = sum_i=1^n(T(i-1) * T(n-i))
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
const int cons=501;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) {return (a.second < b.second);}
static bool mysort(pair<int, int>& a, pair<int, int>& b)
{
  return a.first == b.first ? a.second < b.second : a.first > b.first;
}
struct Mysort
{
 bool operator()(array<int, 3> a, array<int, 3>& b)
{
  if( (a[2] == b[2]) and (a[1]==b[1]) and (a[1]==1) and (a[2]==1) )
  {
    return a[0] < b[0];
  }
  if(a[1]*a[2] == b[1]*b[2]) return a[0] < b[0];
  return a[1]*a[2] > b[1]*b[2];
  return a[0]<b[0];
}
}; 
template<typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;
struct cmp {
  bool operator() (pair<int, int> a, pair<int, int> b) {
     return a.first+a.second > b.first+b.second;
  }
};
const int maxn = 2e5;
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
#define mod 1000000009
int takemod(int a){return ((a%mod)+mod)%mod;}
 
int fast_exp(int base, int expo) {
  int res=1;
  while(expo>0) {
    if(expo&1) res=(res*base)%mod;
    base=(base*base)%mod;
    expo>>=1;}
  return res;}
 
int modinv(int a){return takemod(fast_exp(takemod(a), mod-2));}
int mint(int x, int y, int z) 
{   
    if (x < y) return (x < z)? x : z; 
    else return (y < z)? y : z; 
}
const int N = 501;
vector<int> gr[N], sol, vis(N);

void dfs(int node)
{
  vis[node]=1;
  sol.push_back(node);
  for(auto x:gr[node])
  {
    if(!vis[x])
    {
      dfs(x);
    }
  }
}

void solve_me()
{
  int n;cin>>n;
  vi v(n);
  for(auto &i:v)cin>>i;
  vector<string> vs(n);
  for(auto &i:vs)cin>>i;

  vi ans(n);

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(vs[i][j]=='1')
      {
        gr[i+1].push_back(j+1);
        gr[j+1].push_back(i+1);
      }
    }
  }
  for(int i=1;i<=n;i++)
  {
    if(!vis[i])
    {
      sol=vector<int>();
      dfs(i);
      vector<int> a;
      for(auto x: sol)a.push_back(v[x-1]);///***
      sort(all(a));
      sort(all(sol));
      for(int i=0;i<a.size();i++)
      {
        ans[sol[i]-1] = a[i];///*** that above step can be directly done here using map .. we are 
        // just mappinng the smallest index with smallest possible element 
      }
    }
  }

  for(int i=0;i<n;i++)
  {
    if(ans[i]==0)
    {
      ans[i]=v[i];
    }
  }
  for(auto x:ans){cout<<x<<" ";}
  return;
}
int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
	#endif
  // cout << fixed << setprecision(18);
  int TC=1;//cin>>TC;
  while(TC--)solve_me();
}
// https://app.pluralsight.com/course-player?clipId=db4472d5-8c3b-416a-857b-f483e8fd9d82
// Approach 1: Linear Scan
// http://www.ijesrt.com/issues%20pdf%20file/Archives-2014/March-2014/86.pdf
// https://www.eetimes.com/power-dissipation-in-portables-design-considerations-using-low-power-cmos-ics/