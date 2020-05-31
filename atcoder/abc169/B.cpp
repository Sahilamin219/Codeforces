#include <bits/stdc++.h>
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
int main(){
    fast
    int n;cin>>n;
    long double k=1,val;
    int f=0;
    f(i,0,n){
        cin>>val;
        if(val==0){
            f=1;
            break;
        }
        k=k*val;
    }
    if(f)cout<<0;
    else if(k>1000000000000000000)cout<<-1;
    else{
        cout<<long(k);
    }
    return 0;
}