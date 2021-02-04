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
const int maxi=101;
int c[maxi], d[maxi];
vector<multiset<int>> all;
int k;
void recursion(int i, multiset<int>& st)
{
  if(i==k)
  {
    all.push_back(st);
    return;
  }
  multiset<int> tmp=st;
  tmp.insert(c[i]);
  recursion(i+1, tmp);
  tmp=st;
  tmp.insert(d[i]);
  recursion(i+1, tmp);
}
void solve_me()
{
  int n,m;cin>>n>>m;
  vector<pair<int, int>> v(m);
  for(int i=0;i<m;i++)
  {
    cin>>v[i].first>>v[i].second;
  }
  cin>>k;
  for(int i=0;i<k;i++)
  {
    cin>>c[i]>>d[i];
  }
  multiset<int> st;
  recursion(0, st);
  int ans=0;
  for(auto ms: all)
  {
    int cnt=0;
    for(int i=0;i<m;i++)
    {
      if( ms.find(v[i].first) != ms.end() and ms.find(v[i].second) != ms.end())cnt++;
    }
    ans=max(ans, cnt);
  }
  cout<<ans<<"\n";
  return;
}
int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	solve_me();
}