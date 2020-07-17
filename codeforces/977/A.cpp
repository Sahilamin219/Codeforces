#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,k;cin>>n>>k;
    while(k--)
    {
        if(n%10==0){n/=10;}
        else{n--;}
    }
    cout<<n;
    return 0;
}   