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
            if(flag==1){
                int d=abs(v[i]-v[i-1]);
                if(d%2==1){
                    flag_a=1;
                }
            }
            flag=1;
        }
        if(flag_a==1){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}
// https://stackoverflow.com/questions/49963874/codechef-a-puzzle-game