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
    LL n;cin>>n;
    LL a=1,b=1,c=(n-2);
    if(c%3==0){
        c--;
        b++;
    }
    cout<<a<<" "<<b<<" "<<c<<"\n";
    return 0;
}