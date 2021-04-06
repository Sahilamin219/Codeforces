#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;
#define deb(v) for(auto x: v){cout<<x<<" ";}cout<<"\n";
#define deb2(v) for(auto x: v){cout<<x.frist<<","<<x.second<<" ";}cout<<"\n";
struct hash_pair {
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
void solve(){
  int n;cin>>n;
  vi v(n);
  for(auto &x:v)cin>>x;
    vi dp(n+1, 0);
  for(int i=0;i<n;i++){
    if(i==0){dp[i]=0;continue;}
    if(i==1)dp[i]+= abs(v[i]-v[i-1]);
    else{
      dp[i]=min(dp[i-1] + abs(v[i]-v[i-1]) ,  dp[i-2] + abs(v[i]-v[i-2]));
    }
  }
  // deb(dp);
  cout<<dp[n-1];
}
int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
  #endif
  // cout << fixed << setprecision(18);
  int TC=1;//cin>>TC;
  while(TC--)solve();
}