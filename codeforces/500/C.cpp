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
int mint(int x, int y, int z) 
{   
    if (x < y) return (x < z)? x : z; 
    else return (y < z)? y : z; 
}
void solve_me()
{
  int n, m, i;cin>>n>>m;
  vector<int> vistited(maxn);
  vector<int> v, u;
  vector<int> wgt(n+1);
  for(int i=1;i<=n;i++)
  {
    cin>>wgt[i];
  }
  for(i=0;i<m;i++){
    int vl;
    cin>>vl;
    if(vistited[vl]==0)
    {
      vistited[vl]=1;
      v.push_back(vl);
    }
    u.push_back(vl);
  }
  stack<int> s1;
  reverse(all(v));
  for(auto i:v)s1.push(i);
  int ans=0;
  for(i=0;i<m;i++)
  {
    int k=u[i];
    stack<int> s2;
    while(s1.top() != k)
    {
      s2.push(s1.top());
      s1.pop();
    }
    s1.pop();
    while(!s2.empty())
    {
      s1.push(s2.top());
      ans += wgt[s2.top()];
      s2.pop();
    }
    s1.push(k);
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
  int TC=1;//cin>>TC;
  while(TC--)solve_me();
}
// https://app.pluralsight.com/course-player?clipId=db4472d5-8c3b-416a-857b-f483e8fd9d82
// Approach 1: Linear Scan
// http://www.ijesrt.com/issues%20pdf%20file/Archives-2014/March-2014/86.pdf
// https://www.eetimes.com/power-dissipation-in-portables-design-considerations-using-low-power-cmos-ics/

void mydp()
{
    vector<vector<int>> dp(2, vector<int>(101,mod));
    dp[1][0]=0;
    vector<int> v(101);
    for(int i=0;i<101;i++)
    {
        dp[0][i] = dp[1][i - 1] + v[i - 1];
        dp[1][i] = dp[0][i - 1];
        if(i>1) {
            dp[0][i] = min(dp[0][i], dp[1][i - 2] + v[i - 1] + v[i - 2]);
            dp[1][i] = min(dp[1][i], dp[0][i - 2]);
        }
    }
    cout<<min(dp[0][101], dp[1][101])<<"\n";
}
