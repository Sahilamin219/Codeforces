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
  int n, k;cin>>n>>k;
  vi v(n);
  for(auto &i:v)cin>>i;
  int m = *max_element(all(v));
  if(n*m < k)
  {
    cout<<"-1\n";return;
  }
  int ans=n+1;
  for(int i=0;i<k;i++)
  {
    int to=-2;
    for(int j=0;j<n-1;j++)
    {
      if ( v[j] < v[j+1])
      {
        to=j;
        break;
      }
    }
    ans = to+1;
    if(to==-2)break;
    v[to]++;
  }
  cout<<ans<<"\n";
  return;
}
int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int TC=1;cin>>TC;
  while(TC--)solve_me();
}