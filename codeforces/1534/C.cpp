#include "bits/stdc++.h"
#define int long long
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define zrobits(x)	__builtin_ctzll(x)
#define bitcount	__builtin_popcountll(x)
#define ps(x,y)		fixed<<setprecision(y)<<x
#define negmod(X,Y) X % Y + (X %  Y < 0 ? Y : 0)
#define forn(i, n) for (int i = 0; i < (n); i++)
#define flip_bits(number) static_cast<unsigned>(~number) 
using namespace std;
void Solve_cf(){
    int n;cin>>n;
    vector<int> a(n), b(n);
    for(auto &i:a)cin>>i;
    for(auto &i:b)cin>>i;
    vector<int> par(n+1);
    for(int i=0;i<n;i++){
        par[b[i]]=a[i];
    }
    vector<int> visit(n+1, 0);
    int ans=1;
    for(int i=1;i<=n;i++){
        if( visit[i] == 0 ){
            int p=par[i];
            visit[p]=1;
            while( i != p){
                // cout<<p<<","<<par[p]<<" ";
                p=par[p];
                visit[p]=1;
                // break;
            }
            // cout<<"\n";
            ans *= 2;
            ans%=mod;
        }
    }
    cout<<ans<<"\n";
}
int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int TestCase=1;cin>>TestCase;
	while(TestCase--)Solve_cf();
	return 0;
}