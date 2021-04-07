#include <bits/stdc++.h>
#pragma GCC optimize("O2")
using namespace std;

using ll = long long;

vector<ll>cr(vector<ll>&r) {
    vector<ll>ans(r.size()+1, 0);
    int i = 0;
    while (i < r.size()) {
        while (i < r.size() and r[i] == 0) ++i;
        int start = i;
        while (i < r.size() and r[i] == 1) ++i;
        for (int j = 1; j <= i-start; ++j)
            ans[j] += i - start - j + 1;
    }
    return ans;
}

int main () {
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll>r(n), c(m);
    for (auto &x: r)
        cin >> x;
    for (auto &x: c)
        cin >> x;
    vector<ll> gr = cr(r), gc = cr(c);
    ll ans = 0;
    for (int i = 1; i < gr.size(); i++) {
        if (k % i == 0 && k / i <= m) {
            ans += gr[i] * gc[k / i];
        }
    }
    cout << ans << endl;
}