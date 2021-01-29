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
  int n,k;cin>>n;
  vi v(n);
  for(auto &i:v)cin>>i;
  int ans=1, collection=1, last=0;
  sort(all(v), greater<int>());
  for(int i=1;i<n;i++)
  {
    if( v[last] - v[i] <= 5)
    { 
      // cout<<v[last]<<" "<<v[i]<<endl;
      collection++;
      ans = max(ans, collection);
    }
    else collection--, last++, i--;
  }
  cout<<ans;
  return;
}
int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
	#endif
  int TC=1;//cin>>TC;
  while(TC--)solve();
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