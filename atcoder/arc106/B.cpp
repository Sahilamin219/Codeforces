#include <bits/stdc++.h>
#define sz(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fr(i,a,b) for(long long int i=a;i>b;i--)
#define pb push_back
#define mkp make_pair
#define mod 1000000009
#define MAX 100000
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cerr<< #x << ':' << x << endl;
#define lb(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define ub(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define fit(it,c) for ( __typeof((c).begin()) it=(c).begin(); it!=(c).end(); it++ )
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
//int arr[MAX], n;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
{return (a.second < b.second);}
template <typename T,typename... Types>
void sout(T var1,Types... var2){
    cout<<var1<<" ";
    sout(var2...);
}

void solve()
{   
    ll n,m,s1=0,s2=0;cin>>n>>m;
    vi a(n), b(n);
    f(i,0,n)cin>>a[i],s1+=a[i];
    f(i,0,n)cin>>b[i],s2+=b[i];

    vvi gr(n, vi());
    f(i,0,m)
    {
        ll x,y;cin>>x>>y;
        gr[x-1].pb(y-1);
        gr[y-1].pb(x-1);
    }
    
    bool check=true;
    f(i,0,n)
    {
        if(a[i] != b[i] and gr[i].size() == 0){ check=false;break;}
    }
    cout<< ((s1 == s2 and check) ?"Yes":"No") ;
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();exit(0);
    return 0;   
}