#include <bits/stdc++.h>
#define endl "\n";
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using namespace std;
int main()
{
    fast;
    int n;cin>>n;
    int flag=0;
    if(n%2){
        flag=1;
        n-=3;
    }
    int count=0;
    if(flag)count=1;
    count+=(n/2);
    cout<<count<<endl;
    f(i,0,n/2)cout<<2<<" ";
    if(flag)cout<<3;
    return 0;
}