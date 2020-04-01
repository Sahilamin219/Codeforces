#include <bits/stdc++.h>
#define n(a) int(a.size())
#define fori(i,a,b) for(long long int i=a;i<b;i++)
#define foir(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mod 1000000007
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
// const long long int mx=100000;
// const long long int m=1000000007;
#define debug(x) cout<< #x << ':' << x << endl;
/* global declaration */
bool flag_g=0;
// bool check(ll n) {
//     ll m=(pow(n,0.5));
//     if( n==2 || n==3 ){
//         return true;
//     }
//     if( n%2==0 || n%3==0 ){
//         return false;
//     }
//     for(ll i=5 ; i<m+1 ; i+=6 ){
//         if( n%i==0 || n%(i+2)==0 ){
//             return false;
//         }
//     }
//     return true;
// }
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // freopen("input2.txt", "r", stdin);
    // freopen("output2.txt", "w", stdout);
    #endif
     fast;
    string s;
    cin>>s;
    ll n=s.size()-1;
    string str=s;
    s[0]='1';
    int a= stoi(s);
    // ll b=(a%10);
    // a=b;
    if(a%2==0){
        cout<<0;
    }
    else{
        cout<<1;
    }
    // cout<<a;
    return 0;
}
// to take xor of string just apply logic