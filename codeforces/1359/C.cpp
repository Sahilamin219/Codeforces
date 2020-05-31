#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
long double h,c,t;
long double value(long long int x){
    long double dif=abs((x)*h+(x-1)*c)/(1.0*(2*x-1));
    dif=abs(dif-(t));
    return dif;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif//freopen("error.txt", "w", stderr);
    fast
    int T;cin>>T;
    while(T--){
        cin>>h>>c>>t;
        if(t==h){
            cout<<1<<"\n";
        }
        else if((h+c)/2>=t){
            // cout<<((h+c)/2)<<" "<<t;
            cout<<2<<"\n";
        }
        else{
            int f=0;
            long long int x=(t-c)/(2*t-h-c);
            //x can only be an integer
            long double left_t=value(x-1);
            long double my_t=value(x);
            long double right_t=value(x+1);
            // cout<<"r: "<<right_t<<" l: "<<left_t<<"\n";
            left_t=min(my_t,left_t);
            if(left_t==my_t)f=1;
            if(abs(right_t)<abs(left_t)){
                cout<<2*x+1<<"\n";
            }
            else{
                if(f){
                    cout<<2*x-1<<"\n";
                }
                else{
                    cout<<2*x-3<<"\n";
                }
            }
        }
    }
    return 0;
}