#include <bits/stdc++.h>
#define n(a) int(a.size())
#define fori(i,a,b) for(int i=a;i<b;i++) 
#define mod 1000000007
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
using namespace std;
typedef long long int LL;
const long long int mx=100000;
const long long int m=1000000007;
#define debug(x) cout<< #x << ':' << x << endl;
/* global declaration */

bool check(string a, string b){
    int n=a.size();
    if(n%2==1){
        return a==b;
    }
    string s11,s12,s21,s22;
    s11.assign(a,0,n/2);
    s12.assign(a,n/2,n);
    s22.assign(b,0,n/2);
    s21.assign(b,n/2,n);
    return(check(s11,s21) and check(s12,s22) or check(s11,s22) and check(s12,s21));
}

int main()
{
    string a,b;
    cin>>a>>b;
    int flag=0;
    flag=check(a,b);
    if(flag==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}