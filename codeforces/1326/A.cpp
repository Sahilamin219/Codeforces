#include <bits/stdc++.h>
#define n(a) int(a.size())
#define fori(i,a,b) for(int i=a;i<b;i++) 
#define mod 1000000007
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
// #define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int LL;
const long long int mx=100000;
const long long int m=1000000007;
#define debug(x) cout<< #x << ':' << x << endl;
/* global declaration */

int main(){
    // fast;
    int t;
    cin>>t;
    while(t--){
        LL n;
        cin>>n;
        // LL l=pow(10,n);
        if(n==1){
            cout<<-1<<"\n";
        }
        else{
            // LL k=0;
            // k+=pow(10,n-1);
            // k=k*2;
            if(n==2){
                cout<<23<<"\n";
            }
            else{
                string s="2";
                // long long int s=0;
                while(n>1){
                    s+='3';//(2*pow(10,n-1));
                    n--;
                }
                cout<<s<<"\n";
            }
        }
    }
    return 0;
}