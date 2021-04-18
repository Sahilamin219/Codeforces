#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;
int mod=10e9+7;
#define deb(v) for(auto x: v){cout<<x<<" ";}cout<<"\n";
#define deb2(v) for(auto x: v){cout<<x.first<<","<<x.second<<" ";}cout<<"\n";
struct hash_pair {
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
struct  Data {
  int min;
  int max;
  int sum;
  Data(int min=0, int max=0, int sum=0) : min(min), max(max), sum(sum) {};
};
bool bysec(const pair<int,int> &a, const pair<int,int> &b){
    if(a.second==b.second){return (a.first > b.first);}
    return a.second < b.second;
}

// const int MAX = 2e3 + 5;
// int MEM[MAX][MAX];
vi v;
// int dp(int l, int r){
//   if(l==r)return 0;
//   if(MEM[l][r]!=-1)return MEM[l][r];
//   return MEM[l][r] = min( dp(l+1, r) + v[l], dp(l, r-1) + v[r] );
// }

int memo[2001][2];
int n;
int rec(int i, int token){

  if(i==n-1 and !token)return 0;
  if(i==n-1 and token)return v[n-1];
  if(memo[i][token]!=-1)return memo[i][token];

  if(token){
    memo[i][token] = max( rec(i+1, token),  v[i] + rec(i+1, token^1) );
  }
  else{
    memo[i][token] = min( v[i] + rec(i+1, token), rec(i+1, token^1)  );
  }
  return memo[i][token];

}

void solve(){
  // int n;
  cin>>n;
  v.clear();
  v.resize(n);
  for(auto &i:v)cin>>i;
  memset(memo, -1, sizeof(memo));
  int sum=accumulate(all(v), 0ll);
  int k=rec(0, 1);
  cout<<sum-k<<" "<<k;
  // sort(all(v));
  // memset(MEM, -1, sizeof MEM);
  // cout<<dp(0, n-1);

  return ;
  auto Life=nullptr;
  cout<<(&Life);
}
int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
  #endif
  int TC=1;//cin>>TC;
  while(TC--)solve();
  vi vis(20001);
  int maxDepth, depth, farthestNode;
  vector<vi> adj;
  function <void(int, int, int)> dfs = [&](int a, int par, int depth) {
      vis[a] = true;
      if(depth > maxDepth){
          maxDepth = depth;
          farthestNode = a;
      }
      for(auto x: adj[a]){
          if(!vis[x])
              dfs(x, a, 1 + depth);
      }
  };
}
// https://codeforces.com/contest/1353/problem/E
// https://codeforces.com/contest/977/problem/E
// https://codeforces.com/contest/977/problem/D
// https://codeforces.com/contest/1175/problem/C
// https://www.cnblogs.com/grandyang/p/4606334.html