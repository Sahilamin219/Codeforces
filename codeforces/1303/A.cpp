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
        string str;
        cin>>str;
        string aa="1";
        string bb="0";
        ll count=0;
        int a=0;int b=0;int flag=0;
        for(int i=0;i<str.size()-1;i++){
            if(a==0){
                if(str[i]==aa[0]){
                    if(str[i+1]==bb[0]){
                        a=i;
                        flag=1;
                        // cout<<"yes"<<endl;
                    }
                }
            }
            if(flag==1){
                if(str[i]==bb[0]){
                    if(str[i+1]==aa[0]){
                        b=i;
                        count+=(b-a);
                        flag=0;
                        a=0;
                        // cout<<"no"<<endl;
                    }
                }
            }
            if(a==0){
                if(str[i]==aa[0]){
                    if(str[i+1]==bb[0]){
                        a=i;
                        flag=1;
                        // i=i+1;
                        // cout<<"yes"<<endl;
                    }
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}