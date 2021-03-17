#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;
void Solution(){
  int n;cin>>n;
  vi v(n);
  map<int, int> m;
  for(int i=0;i<n;i++)cin>>v[i], m[v[i]]++;
  sort(all(v));
  int first=0;
  for(int i=0;i<n;i++){
    if( v[i]==first){
      first++;
    }
  }
  for(auto x : m){
      cout<<x.first<<" ";
      m[x.first]--;
  }
  for(auto x : m){
    while(m[x.first]--){
      cout<<x.first<<" ";
    }
  }
  cout<<"\n";
  return;
}

int32_t main(){
  // cout << fixed << setprecision(18);
  int TestMe=1;cin>>TestMe;
  while(TestMe--)Solution();
}