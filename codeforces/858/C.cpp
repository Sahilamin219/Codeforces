#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;
int mod=10e9+7;
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
struct  Data {
  int min;
  int max;
  int sum;
  Data(int min=0, int max=0, int sum=0) : min(min), max(max), sum(sum) {};
};
// Ability and desire to thrive in a proactive, customer focused environment
// vi gr[1001];
// vi wgt[1001];
// vi visit[1001];
// void dfs_(int node, int parent){
//   visit[node]=1;
//   for(auto x: gr[node] ){
//     if(x!=parent and !visit[node] and wgt[x] > wgt[node]){
//       dfs_(x, node);
//     }
//   }
//   top.push_back(node);
// }
// meri google mai laga do ...
void solve(){
  string s;cin>>s;
    if(s.size() < 3){
      cout<<s;return;
  }
  vi dp(s.size(), 0);
  dp[0]=0;
  dp[1]=0;
  vector<char> v={'a', 'e', 'i', 'o', 'u'};
  for(int i=2;i<s.size();i++){
    int flag=0;
    // while(i<s.size()-1 and s[i]==s[i+1])i++;
    // if(i==s.size()-1)break;
    for(int j=0;j<v.size();j++){
      if(v[j] == s[i] or v[j]==s[i-1] or v[j]==s[i-2] or (s[i]==s[i-1] and s[i]==s[i-2])){
        flag=1;
        break;
      }
    }
    if(flag){
      dp[i]=dp[i-1];
    }
    else{
      if(i==2)dp[i] = min(dp[i-1], dp[i-2])+1;
      else dp[i] = min(dp[i-1], dp[i-2] )+1;
    }
  }
  // deb(dp);
  // cout<<dp[s.size()-1];
  string ans=s.substr(0, min((int)s.size(), 2ll));
  int flag=0;
  for(int i=2;i<dp.size();i++)
  {
    
    if(dp[i]!=dp[i-1]){
      flag=1;
    }
    if(flag){
      ans+=" ";flag=0;
    }
    ans+=s[i];
  }
  cout<<ans;
  return ;
  auto Life=nullptr;
  cout<<(&Life);
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
// https://codeforces.com/contest/1353/problem/E
// https://codeforces.com/contest/977/problem/E
// https://codeforces.com/contest/977/problem/D
// https://codeforces.com/contest/1175/problem/C
// https://www.cnblogs.com/grandyang/p/4606334.html