#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;
const int maxn = 1e7+3;
vi StorePrimes(maxn, 0);
void GetPrimes(){
    for(int i = 2; i < maxn; ++i){
        if(StorePrimes[i]){ continue; }
        StorePrimes[i] = i;
        if(i * 1ll * i >= maxn){ continue; }
        for(int j = i * i; j < maxn; j += i){
            if(!StorePrimes[j]){ StorePrimes[j] = i; }
        }
    }
}
 
void solve_me(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int& u : a){ cin >> u; }
    for(int& u : a){
        int v = 1;
        while(StorePrimes[u]){
            int d = StorePrimes[u];
            int cnt = 0;
            while(u % d == 0){
                u /= d;
                ++cnt;
            }
            if(cnt & 1){
                v *= d;
            }
        }
        u = v;
    }
    set< int > seen;
    int ans = 1;
    for(int u : a){
        if(seen.find(u) != seen.end()){
            ++ans;
            seen.clear();
        }
        seen.insert(u);
    }
    cout << ans << '\n';
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