#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;

void solve(){
  int n,k;cin>>n>>k;
  vi v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  vector<int> pre={0};
  for(int i=0;i<n;i++){
    pre.push_back( pre.back() + v[i] );
  }

  int max1=0, ind1;
  int a, b, ans=0;
  for(int i=k;i<=n-k;i++){
    int dif = pre[i] - pre[i-k];
    if(max1 < dif){
      max1=dif;
      ind1=i-k+1;
    }

    if( max1 + pre[i+k] - pre[i] > ans){
      a=ind1;
      b=i+1;
      ans = max1 + pre[i+k] - pre[i];
    }
  }
  cout<<a<<" "<<b<<"\n";
}

int32_t main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;//cin>>t;
    while(t--)solve();
	return 0;
}