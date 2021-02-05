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
const int MaxLength=501;
const int N=50001;
int dist[N][MaxLength];
vector<vector<int>> gr;
int n, ans, Len;
void dfs(int node, int par=0)
{
  dist[node][0]=1;
  for(auto x: gr[node])
  {
    if(x==par)continue;
    dfs(x ,node);
    for(int i=0;i<Len;i++)
    {
      ans += dist[node][i]*dist[x][Len-i-1];
    }

    for(int i=0;i<=Len;i++)
    {
      dist[node][i+1] += dist[x][i];
    }

  }
}
void solve_me()
{
  int n,m,x,y;
  cin>>n>>m>>x>>y;
  vi a(n), b(m);
  for(auto &x: a)cin>>x;
  for(auto &x: b)cin>>x;
  int ans=0;
  vector<pair<int, int>> vp;
  int Last=0;
  for(int i=0;i<n;i++)
  {
    int Value = a[i]-x;
    int pos = lower_bound( b.begin() + Last, b.end() , Value) - b.begin();
    if(pos < m)
    {
      if(b[pos] <= a[i]+y)
      {
        ans++;
        vp.push_back({i+1, pos+1});Last = pos+1;
      }
      else Last=pos;
    }
    else break;
  }
  cout<<ans<<"\n";
  for(auto x: vp){cout<<x.first<<" "<<x.second<<"\n";}
  return;
}
int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);solve_me();
}