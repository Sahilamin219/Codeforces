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
void solve(){
  int n;cin>>n;
  vector<pair<int, int>> vp(n);
  int left1=0, right1=mod, left2=mod, right2=0;
  for(int i=0;i<n;i++){
    cin>>vp[i].first>>vp[i].second;
    left1 = max( left1, vp[i].first );
    left2 = min( left2, vp[i].first );

    right1 = min( right1, vp[i].second );
    right2 = max( right2, vp[i].second );

  }
  cout<<max( 0ll , left1 - right1 )<<"\n";

  // sort(all(vp));
  // int ans = min( abs(vp[n-1].first - vp[0].first), abs(vp[n-1].second - vp[0].second) );
  // ans=mod;
  // sort(all(vp), bysec);
  // // deb2(vp);
  // int s=vp[0].second, e=vp[0].second;
  // for(int i=1;i<n;i++){
  //   if( vp[i].second > e and vp[i].first > s){// always true vp[i].second > e  (except == case)
  //     e=vp[i].second;
  //   }
  // }
  // cout<<min(e-s, ans)<<"\n";

  return ;
  auto Life=nullptr;
  cout<<(&Life);
}
int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
  #endif
  int TC=1;cin>>TC;
  while(TC--)solve();
}
// https://codeforces.com/contest/1353/problem/E
// https://codeforces.com/contest/977/problem/E
// https://codeforces.com/contest/977/problem/D
// https://codeforces.com/contest/1175/problem/C
// https://www.cnblogs.com/grandyang/p/4606334.html