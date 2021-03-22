#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;

void solve()
{
  int n;cin>>n;
  vi v(n), u(n);
  multiset<int> m;

  for(int i=0;i<n;i++)cin>>v[i], v[i]%=n;;
  for(int i=0;i<n;i++)cin>>u[i] , m.insert(u[i]%n);
  vi res;
  for(int i=0;i<n;i++){
    auto it=m.lower_bound(n-v[i]);
    if(it==m.end()){
      it=m.begin();
    }
    res.push_back( (v[i] + *it)%n );
    m.erase(it);
  }
  for(auto x:res){cout<<x<<" ";}cout<<"\n";
  return ;
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
// https://codeforces.com/contest/582/problem/A
// https://codeforces.com/contest/977/problem/F
// https://codeforces.com/contest/1353/problem/E