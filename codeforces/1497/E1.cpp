#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;
const int maxn = 1e7+3;
vi StorePrimes(maxn, 0);
void GetPrimes(){
  for(int i=2;i<maxn;i++){
    if(StorePrimes[i])continue;
    StorePrimes[i]=i;
    if(i*i >= maxn)continue;
    for(int j=i*i;j<maxn;j+=i){
      if(!StorePrimes[j]){
        StorePrimes[j]=i;
      }
    }
  }
}
void solve_me(){
  int n, k;cin>>n>>k;
  vi v(n);
  for(auto& i:v)cin>>i;
  for(int& u:v){
    int a=1, count=0;
    while(StorePrimes[u]){
      int p=StorePrimes[u];
      count=0;
      while(u%p==0){
        u/=p;
        count++;
      }
      if(count%2){
        a=a*p;
      }
    }
    u=a;
  }
  set<int> seen;
  int ans=1;
  for(int u:v){
    if( seen.find(u)!=seen.end()){
      ans++;
      seen.clear();
    }
    seen.insert(u);
  }
  cout<<ans<<"\n";
  return;
}

int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
	#endif
  // cout << fixed << setprecision(18);
  int TC=1;cin>>TC;
  GetPrimes();
  while(TC--)solve_me();
}