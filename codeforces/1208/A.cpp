#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;cin>>T;
    while(T--){
    	ll a,b,n;cin>>a>>b>>n;
    	if(n%3==0)cout<<a<<"\n";
    	else if(n%3==1)cout<<b<<"\n";
    	else{
    		cout<<(a^b)<<"\n";
    	}
    }
    return 0;
}