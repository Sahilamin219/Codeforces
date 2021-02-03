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
int n,m;
void solve_me()
{
  cin>>n>>m;
  vector<int> a;
  vector<int> b;
  vector<int> v(n);
  for(auto &i:v)cin>>i;
  for(int i=0, vl;i<n;i++)
  {
    cin>>vl;
    if(vl==1)a.push_back(v[i]);
    else b.push_back(v[i]);
  }
  if( accumulate(all(v), 0ll) < m){cout<<"-1\n";return;}
  sort(all(a), greater<int>());
  sort(all(b), greater<int>());
  vector<int> prea={0}, preb={0};
  for(int i=0;i<a.size();i++)prea.push_back( prea.back() + a[i]);
  for(int i=0;i<b.size();i++)preb.push_back( preb.back() + b[i]);
  int ans=(a.size() + 2*b.size());
  int j=preb.size();
  for(int i=0;i<prea.size();i++)
  {
    while(j>0 and prea[i] + preb[j-1] >= m)j--;
    if(j==0 and prea[i] + preb[j] >= m)
    {
      ans=min(ans, i);continue;
    }
    if( j<preb.size() and prea[i] + preb[j] >= m)
    {
      ans= min(ans ,i+2*j);
    }
  }
  cout<<ans<<"\n";
  return;
}
int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
	#endif
  // cout << fixed << setprecision(18);
  int TC=1;cin>>TC;
  while(TC--)solve_me();
}
// https://app.pluralsight.com/course-player?clipId=db4472d5-8c3b-416a-857b-f483e8fd9d82
// Approach 1: Linear Scan
// http://www.ijesrt.com/issues%20pdf%20file/Archives-2014/March-2014/86.pdf
// https://www.eetimes.com/power-dissipation-in-portables-design-considerations-using-low-power-cmos-ics/