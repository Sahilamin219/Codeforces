#include <bits/stdc++.h>
#define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define fi first
#define se second
#define pb push_back
#define mkp make_pair
#define pi pair<long long int,long long int>
#define mapi map<long long int,long long int>
#define mod 1000000007;
#define all(x) x.begin(), x.end()
#define lcm(a,b) ((a*b)/__gcd(a,b))
#define zrobits(x)  __builtin_ctzll(x)
#define bitcount    __builtin_popcountll
#define ps(x,y)     fixed<<setprecision(y)<<x
#define negmod(X,Y) X % Y + (X %  Y < 0 ? Y : 0)
#define flip_bits(number) static_cast<unsigned>(~number) 
#define print() cout<<"\n";
#define debug(x) cout<< #x << ':' << x << endl;
#define show(x) cout<<x<<endl;
#define pret(x) cout<<x<<endl; return 0;
#define disp(x) cout<<x<<" ";
#define let(x,y) cout<<x<<" "<<y<<endl;
using namespace std;
typedef long long int ll;
#define vi(v,n) vector<ll> v(n)
#define vvi(v,n,m) vector<vector<ll> > v(n, vector<ll> (m,0));
#define INF 0x3f3f3f3f;
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
const int cons=501;
int get(ll a, vector<ll> v, ll l, ll h){
    if (a <= v[l])return l;
    if (a > v[h])return -1;
    ll mid=(l+h)/2;
    if(v[mid]==a or (mid+1<s(v) and v[mid]<a and v[mid+1]>=a))return (mid+1);
    else if(v[mid]==a or (mid-1>-1 and v[mid]>a and v[mid-1]<=a))return mid;
    else if(v[mid]>a) return get(a,v,l,mid);
    else {
        return get(a,v,mid,h);
    }
}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif//freopen("error.txt", "w", stderr);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,r,avg;cin>>n>>r>>avg;
    vector<pair<ll,ll>> v;
    ll sum=0;
    f(i,0,n){
        ll a,b;cin>>a>>b;
        v.pb(mkp(a,b));
        sum+=a;
    }
    sort(all(v), sortbysec);
    ll rel_avg=sum;
    ll cnt=0;
    int i=0;
    avg*=n;
    while(rel_avg<avg){
        ll add=(min(avg-rel_avg,r-v[i].fi));
        cnt+=(add)*v[i].se;
        rel_avg+=add;
        i++;
    }
    cout<<cnt<<"\n";
    return 0;
}
// Use one of the forms of string::insert:
// std::string str("lolcat");
// str.insert(0, 5, '.');
// This will insert "....." (five dots) at the start of the string (position 0).