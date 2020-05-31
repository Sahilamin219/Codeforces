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
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<string> v(n);
        f(i,0,n)cin>>v[i];
        string str=v[0];
        bool found=false;
        f(i,0,m){
            char get_back=str[i];
            for(char temp='a';temp<='z';temp++){
                str[i]=temp;
                f(j,0,n){
                    int flag=2;
                    f(k,0,m){
                        if(v[j][k]!=str[k]){
                            // cout<<v[j]<<"<-->"<<str<<"   ";
                            flag--;
                        }
                    }
                    if(flag<=0){
                        break;
                    }
                    else if(j==n-1){
                        found=true;
                        break;
                    }
                }
                if(!found){
                    str[i]=get_back;
                }
                else{
                    // cout<<str<<" ";
                    break;
                }
            }
            if(found)break;
        }
        if(found){
            cout<<str<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
    return 0;
}