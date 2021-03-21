#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;

void solve()
{
  int n;cin>>n;
  vi v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  int ans=(v[0] + v[1])*n;
  int mn1=v[0], mn2=v[1], sum1=0, sum2=0;
  for(int i=2;i<n;i++){
    int left=n-(i/2);
    if(i%2){
      if(mn2 >= v[i]) sum2 += mn2;
      else sum2 += (v[i]);
      mn2=min(mn2, v[i]);
      ans = min( ans, sum2 + sum1 + mn2*left + mn1*left );
    }
    else{
      if(mn1 >= v[i]) sum1 += mn1;
      else sum1 += (v[i]);
      mn1=min(mn1, v[i]);
      ans = min( ans, sum2 + sum1 + mn2*(left+1) + mn1*left );
    }
  }

  cout<<ans<<"\n";
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
// https://codeforces.com/contest/582/problem/A
// https://codeforces.com/contest/977/problem/F
// https://codeforces.com/contest/1353/problem/E