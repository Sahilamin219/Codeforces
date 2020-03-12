#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    fast;
    int n;
    cin>>n;
    int a=0,b=0,c=0,d=0;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        if(val%4==1){
            a++;
        }
        else if(val%4==2){
            b++;
        }
        else if(val%4==3){
            c++;
        }
        else{
            d++;
        }
    }
    int count=0;
    if((a-c-(b%2)*2)>0){
        count+=(d+((b+1)/2)+c+((a-c-(b%2)*2)+3)/4);
    }
    else{
        count+=(d+((b+1)/2)+c);
    }
    cout<<count;
    return 0;
}