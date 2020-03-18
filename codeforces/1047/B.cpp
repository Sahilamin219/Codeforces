#include <bits/stdc++.h>
#define n(a) int(a.size())
#define fori(i,a,b) for(int i=a;i<b;i++) 
#define mod 1000000007
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int LL;
const long long int mx=100000;
const long long int m=1000000007;
#define debug(x) cout<< #x << ':' << x << endl;
/* global declaration */

int main(){
    fast;
    int n;cin>>n;
    int max=0;
    while(n--){
        int x,y;
        cin>>x>>y;
        if(max<(x+y)){
            max=(x+y);
        }
    }
    cout<<max<<"\n";
    return 0;
}