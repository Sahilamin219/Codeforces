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
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<string> s;
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            // cout<<str<<"\n";
            s.push_back(str);
        }
        // for(int i=0;i<s.size();i++){
        //     cout<<s[i]<<"\n";
        // }
        if(2*x<=y){
            ll count=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(s[i][j]=='.'){
                        count++;
                    }
                }
            }
            ll c=count*x;
            cout<<(c)<<"\n";
        }
        else{
            int count_single=0;
            int count_double=0;
            if(m==1){
                for(int j=0;j<n;j++){
                    if(s[j][0]=='.'){
                        count_single++;
                    }
                }
                ll a;
                a=(count_single*x);
                cout<<(a)<<"\n";
            }
            else{
                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                        if(j<m-1 and (s[i][j+1]!='*') and (s[i][j]=='.')){
                            count_double++;
                            j++;
                        }
                        else if(j<m and s[i][j]=='.'){
                            count_single++;
                        }
                    }
                }
                // cout<<count_single<<" "<<count_double<<"\n";
                ll a=0,b=0;
                a=(count_double*y);
                b=(count_single*x);
                cout<<(a+b)<<"\n";
            }
        }
    }
    return 0;
}