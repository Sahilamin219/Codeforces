#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
string rec(int k, int i) {
    string ans;
    ans += i;
    ans += i;
    if (i == k - 1) {
        return ans;
    }
    for (int j = k - 1; j > i + 1; --j) {
        ans += j;
        ans += i;
    }
    ans += rec(k, i + 1);
    ans += i;
    return ans;
}
 
void solve(){
    int n, k;cin>>n>>k;
    if (k == 1) {
        cout<<(string(n, 'a'));
        return ;
    }
    string ans = rec(k, 0);
    for (auto &i : ans) i += 'a';
    ans.pop_back();
    while (ans.length() < n) ans += ans;
    ans.resize(n);
    cout<<(ans);
  return ;
  auto Life=nullptr;
  cout<<(&Life);
}
int32_t main(){
  solve();
}