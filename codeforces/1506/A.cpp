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
  int n ,m, x;
  cin>>n>>m>>x;
  if(n==m and n==1){cout<<"1\n";return;}
  if(x==n*m){cout<<x<<"\n";return;}

  int r=((x-1)%n);
  int c=(x-1)/n;
  // cout<<r<<" "<<c<<" ";
  cout<< m*(r) + c +1<<"\n";
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