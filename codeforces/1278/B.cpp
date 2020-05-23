#include <bits/stdc++.h>
#define endl "\n";
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
using namespace std;
int main()
{
    fast;
    int t;cin>>t;
    while(t--){
        ll a,b;cin>>a>>b;
        ll d=abs(a-b);
        ll sum=0;
        ll i=0;
        int f=0;
        while(sum<d){
            i++;
            sum=(i)*(i+1)/2;
            f=1;
        }
        while((sum-d)%2!=0 and f){
            i++;
            sum=(i)*(i+1)/2;
        }
        cout<<i<<endl;
    }
    return 0;
}