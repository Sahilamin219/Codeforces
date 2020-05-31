#include <bits/stdc++.h>
#define f(i,a,b) for(long long int i=a;i<b;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<string> v(n);
        f(i,0,n)cin>>v[i];
        string str=v[0];
        bool found=false;
        f(i,0,m){
            char get_back=str[i];
            for(char temp='a';temp<='z';temp++){
                str[i]=temp;
                f(j,0,n){
                    int flag=2;
                    f(k,0,m)if(v[j][k]!=str[k])flag--;
                    if(flag<=0)break;
                    else if(j==n-1){
                        found=true;
                        break;
                    }
                }
                if(!found) str[i]=get_back;
                else{
                    break;
                }
            }
            if(found)break;
        }
        if(found)cout<<str<<"\n";
        else{
            cout<<-1<<"\n";
        }
    }
    return 0;
}