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
void solve(){
  // auto v=LSP("abcddedddd");
  // KMP("abcddedddd", "ddd", v);
  int n;cin>>n;
  // vi v(n);
  map<int, int> m;
  for(int i=0, vl;i<n;i++){
    // cin>>v[i];
    cin>>vl;
    m[vl]++;
  }
  vector<int> v;
  int flag=0;
  if(m.size()==1){
    cout<<n<<"\n";return;
  }
  for(auto x: m){
    v.push_back( x.second );
    if(x.second > n/2){flag=x.second - (n-x.second);break;}
  }
  if(flag){
    cout<<flag<<"\n";
  }
  else if(n%2){
    cout<<1<<"\n";
  }
  else {
    cout<<0<<"\n";
  }
  // sort(all(v), greater<int>());
  // int j=0;
  // for(int i=1;i<v.size();i++){
  //   if(v[j]>=v[i]){
  //     v[j]-=v[i];
  //     v[i]=0;
  //     if(v[j]==0){
  //       j=i+1;i++;
  //     }
  //   }
  //   else{
  //     v[i]-=v[j];
  //     v[j]=0;
  //     j=i;
  //   }
  // }
  // cout<<accumulate(all(v), 0ll)<<"\n";
  return ;
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

// https://www.cnblogs.com/grandyang/p/4606334.html