#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
string gg="abcdefghijklmnopqrstuvwxyz";//"AOYEUI";
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
int max3(int a, int b, int c){return max(a, max(b,c));}
int mint(int x, int y, int z) 
{   if (x < y) return (x < z)? x : z; 
    else return (y < z)? y : z; }
vector <pair<long long int,long long int>> v;
bool sortbysec(const pair<ll,ll> &a, const pair<ll,ll> &b){
    if(a.second==b.second){
        return (a.first > b.first);
    }
    return a.second>b.second;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif//freopen("error.txt", "w", stderr);
    fast
    int n;cin>>n;
    vector<int> v(n,0);
    f(i,0,n)cin>>v[i];
    int sum=0;
    f(j,0,31){
        int till_sum=0;
        int max_sum=0;
        int max_elem=0;
        f(i,0,n){
            if(till_sum+v[i]>0 and v[i]<=j){
                till_sum+=v[i];
                max_elem=max(max_elem,v[i]);
            }
            else{
                till_sum=0;
            }
            max_sum=max(max_sum,till_sum);
            // cout<<max_sum<<" ";
            if(max_sum-max_elem>sum){
                sum=max(sum,max_sum-max_elem);
            }
        }
    }
    cout<<sum;
    return 0;
}