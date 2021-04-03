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
void solve1(){
  return ;
}
void solve(){
  int n;cin>>n;
  vi v(n);
  map<int, int> m;
  for(int i=0;i<n;i++){
    cin>>v[i];
    m[-v[i]]++;
  }
  bool ok=false;
  vi frq;
  for(auto c : m){
    frq.push_back(c.second);
  }
  int g=frq[0];
  int i = 1;
  int s = 0;
  while (s <= g && i < frq.size())
      s += frq[i++];
  if (g < s) {
     int b = 0;
     while (b <= g && i < frq.size())
         b += frq[i++];
     while (i < frq.size() && g + s + b + frq[i] <= n / 2)
         b += frq[i++];
     if (g < b && g + s + b <= n / 2) {
         ok = true;
         cout << g << " " << s << " " << b << endl;
     }
  }
  if (!ok)
      cout << 0 << " " << 0 << " " << 0 << endl;
}
int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  // cout << fixed << setprecision(18);
  int TC=1;cin>>TC;
  while(TC--){
    solve();
  }
}
// https://codeforces.com/contest/1353/problem/E
// https://codeforces.com/contest/977/problem/E
// https://codeforces.com/contest/977/problem/D

// https://www.cnblogs.com/grandyang/p/4606334.html