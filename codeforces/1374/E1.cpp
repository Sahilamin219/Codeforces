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
void solve_me()
{
  int n,k;cin>>n>>k;
  vector<array<int, 3>> v;
  int req1=0, req2=0, sumOftime=0;
  for(int i=0, cost, a, b;i<n;i++)
  {
    cin>>cost>>a>>b;
    if(a or b)v.push_back({cost, a, b}), sumOftime+=cost;
    if(a)req1++;
    if(b)req2++;
  }
  if(req1 < k or req2 < k){cout<<"-1";return;}
  // sort(all(v), greater<array<int, 3>>());
  sort(all(v), Mysort());
  // for(auto x:v)
  // {
  //   cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<"\n";
  // }
  // cout<<sumOftime;
  #define INF 1e18;
  int mini=INF;
  vector<int> a={0};
  vector<int> b={0};
  vector<int> c={0};
  for(int i=0;i<v.size();i++)
  {
    if(v[i][2]==1 and v[i][1]==0)
    {
      b.push_back(v[i][0] + b.back());
      continue;
    }
    if(v[i][2]==0 and v[i][1]==1)
    {
      a.push_back(v[i][0] + a.back());
      continue;
    } 
    c.push_back(v[i][0] + c.back());
  }
  // for(auto x: a){cout<<x<<" ";}cout<<"\n";
  // for(auto x: b){cout<<x<<" ";}cout<<"\n";
  // for(auto x: c){cout<<x<<" ";}cout<<"\n";

  int x=a.size()-1, y=b.size()-1;
  for(int i=0;i<c.size();i++)
  {
    while( x and (i + x > k) )x--;
    while( y and (i + y > k) )y--;
    int cost = c[i];
    cost+=a[x];
    cost+=b[y];
    if( (i+x >= k) and (i+y >= k) )mini = min(mini , cost);//, cout<<(i+x)<<" "<<(i+y)<<"\n";
  }
  cout<<mini<<"\n";
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