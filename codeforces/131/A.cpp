#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main() {    
    fast
    string sl;cin>>sl;
    int f=1;
    f(i,1,s(sl)){
        if(int(sl[i])>90){
            f=0;
            break;
        }
    }
    if(!f)cout<<sl;
    else{
        f(i,0,s(sl)){
            if(int(sl[i]>90))sl[i]=sl[i]-32;
            else{
                sl[i]=sl[i]+32;
            }
        }
        cout<<sl;
    }
    return 0;
}