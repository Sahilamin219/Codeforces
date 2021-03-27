#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;

vector<int> KMP(string a, string b, vi LSP){
  vector<int> res;
  int i=0, j=0;
  int l1=a.size(), l2=b.size();
  
  return res;
}
vi LSP(string a){
  vi LSP(a.size(), 0);
  int cnt=0;
  for(int i=1;i<a.size();i++){
    int start=0;
      while(start<i and a[i]==a[start]){
        start++;
      }
      LSP[i]=start;
  }
  return LSP;
}
void solve1(){
  // auto v=LSP("abcddedddd");
  // KMP("abcddedddd", "ddd", v);
  int n;cin>>n;
  vi v(n);
  for(int i=0;i<n;i++)cin>>v[i], v[i]--;
    vi seeen(n, 0);
  int PointerStart=0;
  for(int i=0;i<n;i++){
    if( seeen[v[i]] == 0){
      seeen[v[i]]=1;
      cout<<v[i]+1<<" ";
    }
    else{
      while(seeen[PointerStart]){PointerStart++;}
      cout<<PointerStart+1<<" ";
      seeen[PointerStart]=1;
    }
  }
  cout<<"\n";
  set<int> s;
  for(int i=0;i<n;i++)s.insert(i);
  for(int i=0;i<n;i++){
    auto it=upper_bound(all(s), v[i] );
    // cout<<*it<<" ";
    it--;
    cout<<*(it)+1<<" ";
    s.erase(it);
  }
  cout<<"\n";

  return ;
}
void solve(){
  map<int, int> m;
  int n;cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)cin>>v[i];

  int ans=0, last=0;
  for(int i=0;i<n;i++){
    int x=v[i];
    m[x]=m[x-1]+1;
    if(ans <  m[x]){
      ans=m[x];
      last=x;
    }
  }
  vector<int> res;
  for(int i=n-1;i>=0;i--){
    if(last==v[i]){
      res.push_back(i+1);
      last--;
    }
  }
  reverse(all(res));
  cout<<ans<<"\n";
  for(auto x: res)cout<<x<<" ";
}
int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  // cout << fixed << setprecision(18);
  int TC=1;//cin>>TC;
  while(TC--){
    solve();
  }
}
// https://codeforces.com/contest/1353/problem/E

// https://www.cnblogs.com/grandyang/p/4606334.html