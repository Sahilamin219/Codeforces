#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;
void solve(){
  int n, w;cin>>n>>w;
    multiset<int> ms;
    for(int i=0, vl;i<n;i++){
        cin>>vl;
        ms.insert(vl);
    }
    int level=1, space=w;
    while(ms.size()>0){
        auto it=ms.upper_bound(space);
        if(it!=ms.begin()){
            --it;
            space-=*it;
            ms.erase(it);
        }
        else{
            space=w;
            level++;
        }
    }
    cout<<level<<"\n";
}
int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int TC=1;cin>>TC;
  while(TC--){
    solve();
  }
}
/*
10000
1000
1000
0100
0010
0001
counts = [0 for w in range(0, 20)]
for w in widths:
    counts[log2(w)] += 1
*/