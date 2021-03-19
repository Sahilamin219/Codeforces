#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;

void solve(){
  string s, a;cin>>s;a=s;
  sort(all(a));
  if(a==s){
    cout<<"YES\n";return;
  }
  int cnt=0, flag=0, i=0;
  for(;i<s.size();i++){
    if(s[i]=='1')cnt++;
    else cnt=0;
    if(cnt>=2){
      flag=1;break;
    }
  }
  if(!flag){
    cout<<"YES\n";return;
  }
  cnt=0;
  flag=0;
  for(int j=i+1;j<s.size();j++){
    if(s[j]=='0')cnt++;
    else cnt=0;
    if(cnt>=2){
      flag=1;break;
    }
  }
  if(!flag){
    cout<<"YES\n";return;
  }cout<<"NO\n";
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