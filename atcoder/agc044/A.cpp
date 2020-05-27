#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
ll a,b,c,d;
map<ll,ll> memo;
long long solve(ll n){
    if(n==0)return 0;
    if(n==1)return d;
    if(memo.count(n))return memo[n];
    ll pay = 1e18;
    if(n<pay/d)pay=n*d;
    ll a1=((n/2)*2);
    ll a2=((n+1)/2)*2;
    ll b1=((n/3)*3);
    ll b2=((n+2)/3)*3;
    ll c1=(n/5)*5;
    ll c2=((n+4)/5)*5;
    pay=min(pay,(llabs(n-a1))*d + a + solve(a1/2));
    pay=min(pay,(llabs(n-a2))*d + a + solve(a2/2));
    pay=min(pay,(llabs(n-b1))*d + b + solve(b1/3));
    pay=min(pay,(llabs(n-b2))*d + b + solve(b2/3));
    pay=min(pay,(llabs(n-c1))*d + c + solve(c1/5));
    pay=min(pay,(llabs(n-c2))*d + c + solve(c2/5));
    memo[n]=pay;
    return pay;
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;cin>>t;
    while(t--){
        memo.clear();
        ll n;cin>>n>>a>>b>>c>>d;
        cout<<solve(n)<<"\n";
    }
    return 0;
}