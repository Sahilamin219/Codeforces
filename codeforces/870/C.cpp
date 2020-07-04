#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000009;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
string gg="abcdefghijklmnopqrstuvwxyz";//"AOYEUI";
int max3(int a, int b, int c){return max(a, max(b,c));}
int mint(int x, int y, int z) 
{   
    if (x < y) return (x < z)? x : z; 
    else return (y < z)? y : z; 
}
vector <pair<long long int,long long int>> v;
bool sortbysec(const pair<ll,ll> &a, const pair<ll,ll> &b){
    if(a.second==b.second){return (a.first > b.first);}
    return a.second>b.second;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif//freopen("error.txt", "w", stderr);
    int n;cin>>n;
    while(n--){
        ll a;cin>>a;
        if(a%4==0)cout<<(a/4)<<endl;
        else if(a%4==2 and a>=6)cout<<1+(a-6)/4<<endl;
        else if(a%4==1 and a>=9)cout<<1+(a-9)/4<<endl;
        else if(a%4==3 and a>14)cout<<1+1+(a-14)/4<<endl;
        else{
            cout<<-1<<endl;
        }
    }
    // cout<<ans;
    return 0;
}
