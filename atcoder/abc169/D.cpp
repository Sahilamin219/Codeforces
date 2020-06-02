#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    ll N; cin >> N;
    int ans = 0;
    FOR(i, 2, 1000010) {
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
    cout << ans << endl;
    return 0;
}