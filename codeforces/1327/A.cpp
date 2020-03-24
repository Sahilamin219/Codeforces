#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;
        if(n%2==0){
            if(m%2==0 && m*m<=n){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
        else{
            if(m%2==1 && m*m<=n){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
    }
    return 0;
}