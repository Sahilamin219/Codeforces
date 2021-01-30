#include <bits/stdc++.h>
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
static bool mysort(pair<int, int>& a, pair<int, int>& b){ return a.second==b.second?a.first<b.first:a.second<b.second;}
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
void solve()
{
  int a,b,c;cin>>a>>b>>c;
  if(c==0)
  {
    a-=1;
  }
  else
  {
    b-=1;
  }
  if(a==b and c==0)
  {
    cout<<"Takahashi";
  }
  else if(a==b and c==1)
  {
    cout<<"Aoki"; 
  }
  else if(b<a)
  {
    cout<<"Takahashi";
  }
  else
  {
    cout<<"Aoki";
  }
  return;
}
int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
  // cout << fixed << setprecision(18);
  int TC=1;//cin>>TC;
  while(TC--)solve();
}