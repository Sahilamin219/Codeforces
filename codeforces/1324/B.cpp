#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> v;
        int flag=0,flag_a=0;
        for(int i=0;i<n;i++){
            int val;cin>>val;
            v.push_back(val);
        }
        for(int i=0;i<n;i++){
            if(v[i]!=v[n-1-i]){
                flag=1;
            }
        }
        if(flag==1){
            for(int i=0;i<n;i++){
                int j=i+2;
                int flag_temp=0;
                while(j<n){
                    if(v[i]==v[j]){
                        flag_temp=1;
                        break;
                    }
                    else{
                        j++;
                    }
                }
                if(flag_temp==1){
                    break;
                }
                if(i==n-1){
                    flag_a=1;
                }
            }
            if(flag_a==1){
                cout<<"NO"<<"\n";
            }
            else{
                cout<<"YES"<<"\n";
            }
        }
        else{
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}
// https://stackoverflow.com/questions/49963874/codechef-a-puzzle-game