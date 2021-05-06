#include "bits/stdc++.h"
using namespace std;

const bool ready = [](){
    ios_base::sync_with_stdio(false); cin.tie(0);
    cout << fixed << setprecision(12);
    return true;
}();

using ld=long double;
const ld PI = acos((ld)-1);
using ll= long long;
#define int ll
#define all(v) (v).begin(), (v).end()
#define fori(n) for(int i=0; i<int(n); i++)

#define cini(i) int i; cin>>i;
#define cins(s) string s; cin>>s;
#define cind(d) ld d; cin>>d;
#define cinai(a,n) vi a(n); fori(n) { cin>>a[i]; }
#define cinas(s,n) vs s(n); fori(n) { cin>>s[i]; }
#define cinad(a,n) vd a(n); fori(n) { cin>>a[i]; }

using pii= pair<int, int>;
using pdd= pair<ld, ld>;
using vd= vector<ld>;
using vb= vector<bool>;
using vi= vector<int>;
using vvi= vector<vi>;
using vs= vector<string>;

#define endl "\n"

/* We need to fix one sheep, and move all left of it
 * so that there remains no gap, ans same on right side.
 * Check for all sheeps.
 * How to find how much moves?
 * It is number of sheeps seen so far mult by number of 
 * gap fields.
 */
const int INF=1e18;
void solve() {
    cini(n);
    cins(s);

    vi dpL(n+1);
    int cntS=0;
    int cntG=0;
    int sum=0;
    for(int i=0; i<=n; i++) {
        if(s[i]=='*') {
            dpL[i]=sum;
            cntS++;
        } else {
            sum+=cntS;
        }
    }

    int ans=0;
    vi dpR(n+1);
    sum=0;
    cntS=0;
    for(int i=n-1; i>=0; i--) {
        if(s[i]=='*') {
            ans=INF;
            dpR[i]=sum;
            cntS++;
        } else {
            sum+=cntS;
        }
    }

    for(int i=0; i<n; i++) {
        if(s[i]=='*')
            ans=min(ans, dpL[i]+dpR[i]);
    }
    cout<<ans<<endl;

}

signed main() {
    cini(t);
    while(t--)solve();
}