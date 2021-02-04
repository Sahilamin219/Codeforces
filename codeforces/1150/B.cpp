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
const int maxi=51;
int n;
vector<string> v;
vector<int> vis;
bool flag=true;
bool dfs(int i, int j)
{
  if( i==0 or j==0 or i==n-1 or j==n-1)return false;
  if( (v[i+1][j]=='.') and (v[i-1][j]=='.') and (v[i][j+1]=='.') and (v[i][j-1]=='.') )return true;
  return false;
}
void solve_me()
{
  cin>>n;
  vis.resize(n+1);
  v.resize(n);
  for(int i=0;i<n;i++)cin>>v[i];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(v[i][j] == '.')
      {
        auto check=dfs(i, j);
        if(check)
        {
          v[i+1][j] = '#' ; v[i-1][j] = '#' ; v[i][j+1] = '#' ; v[i][j-1] = '#';
          v[i][j]='#';
          // cout<<i<<","<<j<<" ";
          // cout<<"OK\n";
          // for(auto x:v){cout<<x<<"\n";}
        }
      }
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(v[i][j] == '.')
      {
        flag=false;
        break;//cout<<i<<","<<j<<" ";
      }
    }
  }
  cout<<(flag ? "YES" : "NO");
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
// Approach 1: Linear Scan //         // cyclic sort - place all numbers to match their indexes 
// http://www.ijesrt.com/issues%20pdf%20file/Archives-2014/March-2014/86.pdf
// https://www.eetimes.com/power-dissipation-in-portables-design-considerations-using-low-power-cmos-ics/

// https://recommender.codedrills.io/recommendations/a84cb4e1-1d54-4e0f-8f64-de726b77d05b
// https://recommender.codedrills.io/recommendations/ebfb9d6e-fbd3-434e-89fb-8070b449c9ed