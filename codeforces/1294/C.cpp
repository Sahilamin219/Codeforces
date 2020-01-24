#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
int main(){
    FAST;
    int t;
    cin>>t;
    while(t--){
        ll n,div=2,i=0;
        set<ll> a;
        cin>>n;
        int m=n;
        while((div*div)<=m){
            if(i==2){
                a.insert(n);
                i++;
                break;
            }
            if(n%div==0){
                a.insert(div);
                n = n/div;
                i++;
            }
            div++;
        }
        if(a.size()==3){
            cout<<"YES"<<endl;
            for(auto x: a){
                cout<<x<<" ";
            }
        }
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}