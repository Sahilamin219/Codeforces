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
    int n;
    cin>>n;
    vector <LL> v;
    fori(i,0,n){
        LL va;
        cin>>va;
        v.push_back(va);
    }
    LL a[n];
    LL maxi=v[0];
    a[0]=v[0];
    fori(i,1,n){
        a[i]=v[i]+maxi;
        if(a[i]>maxi){
            maxi=a[i];
        }
    }
    fori(i,0,n){
        cout<<a[i]<<" ";
    }
    return 0;
}