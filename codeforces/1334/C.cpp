#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
void solve(){
    int n;cin>>n;
    vector <ll> a(n,0);
    vector <ll> b(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    ll ans=0;
    ll m=1e12;
    f(i,0,n){
        ll pi=(i+1)%n;
        ll next_health=min(a[pi],b[i]);
        ans+=(a[pi]-next_health);//least possible value is 0
        m=min(next_health,m);
    }
    cout<<ans+m<<"\n";
}
int main() {    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}