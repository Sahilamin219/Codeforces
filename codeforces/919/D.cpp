#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;
const int maxn = 300002;
vector<int> gr[maxn];
string s;
int n, m,  ans=1;
vector<int> vis(maxn, 0), ancestors(maxn, 0);
vector<vector<int>> dp(maxn, vector<int>(26, 0));
void dfs(int node){
  vis[node]=1;
  ancestors[node]=1;
  for(auto child: gr[node]){
    if(ancestors[child]){
      puts("-1");
      exit(0);
    }
    if(!vis[child]){
      dfs(child);
    }
    for(int i=0;i<26;i++){
        dp[node][i]=max(dp[node][i], dp[child][i]);
      }
  }
  dp[node][s[node]-'a']++;
  for(int i=0;i<26;i++)ans=max(ans, dp[node][i]);
  ancestors[node]=0;
}
void solve_me()
{
  cin>>n>>m;
  cin>>s;
  s="#"+s;
  for(int i=0, a, b;i<m;i++){
    cin>>a>>b;
    gr[a].push_back(b);
  }
  for(int i=1;i<=n;i++){
    if(!vis[i]){
      dfs(i);
    }
  }
  cout<<ans<<"\n";
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