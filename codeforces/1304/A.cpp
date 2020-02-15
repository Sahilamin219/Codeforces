#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF 0x3f3f3f3f 
#define pow2(n) (1 << (n))
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        if(x>0){
            y-=x;
            x=0;
        }
        if((y%(a+b))==0){
            cout<<(y/(a+b))<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
	return 0;
}