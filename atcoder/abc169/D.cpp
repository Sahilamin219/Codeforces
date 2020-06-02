#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll N; cin >> N;
    int ans = 0;
    FOR(i, 2, 100000000) {
        int cur = 0;
        while (N % i == 0) {
            cur++;
            N /= i;
        }
        FOR(j, 1, 10000) {
            if (cur < j) break;
            ans++; cur -= j;
        }
    }
    if (N > 1) ans++;
    cout << ans << "\n";
    return 0;
}