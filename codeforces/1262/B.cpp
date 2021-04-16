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
void solve(){
  int n;cin>>n;
  vi v(n);
  multiset<int> ms;
  for(auto &i:v)cin>>i, ms.insert(i);
  int cur=-1;
  int p=1;
  int seen[n+2]={0};
  vi res;
  bool flag=true;
  for(int i=0;i<n;i++){
    if( v[i] > cur){
      cur=v[i];
      res.push_back(v[i]);
      seen[v[i]]=1;
    }
    else{
      while( seen[p] == 1 and p<cur)p++;
      if(p==cur){
        flag=false;break;
      }
      res.push_back(p);
      seen[p]=1;
    }
  }
  // reverse(all(res));
  if( flag ){ for(auto x: res){ cout<<x<<" ";}}
  else cout<<-1;
  cout<<"\n";
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