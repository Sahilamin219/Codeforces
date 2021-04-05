#include "bits/stdc++.h"
#define int long long int
using namespace std;
typedef vector<int> vi;
const int maxn=3001;
int dp[maxn][maxn];
int X=0, Y=0;
vi v;
int solve(int l, int r){// 0 is taro's turn
  if(dp[l][r] != -1)return dp[l][r];
  if(l==r)return dp[l][r]=v[l];
  return dp[l][r]=max( v[l] - solve(l+1, r), v[r] - solve(l, r-1));
}

int32_t main(){
  int n;cin>>n;
  v.resize(n);
  for(auto &i:v)cin>>i;
  memset(dp, -1, sizeof(dp));
  cout<<(solve(0, n-1));
}