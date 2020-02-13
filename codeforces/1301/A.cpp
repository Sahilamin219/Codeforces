#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF 0x3f3f3f3f 
#define pow2(n) (1 << (n))
using namespace std;
typedef long long ll;
int main(){
    FAST;
    ll t;
    cin>>t;
    while(t--){
        string a,b,c;
        cin>>a>>b>>c;
        ll n=a.size();
        int flag=1;
        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                if(a[i]==c[i]){
                    continue;
                }
                else{
                    flag=0;
                    break;
                }
            }
            else{
                if(a[i]==c[i]){
                    continue;
                }
                else if(b[i]==c[i]){
                    continue;
                }
                else{
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}