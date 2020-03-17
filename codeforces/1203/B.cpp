#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int flag=1;
        vector <int> v;
        for(int i=0;i<4*n;i++){
            int val;cin>>val;
            v.push_back(val);
        }
        sort(v.begin(), v.end());
        for(int i=0;i<4*n-1;i++){
            if(v[i]!=v[i+1]){
                flag=0;
                break;
            }
            else{
                i++;
            }
        }
        if(flag==1){
            int a=v[0]*v[4*n-1];
            for(int i=1;i<n;i++){
                if((v[2*i]*v[4*n-2*(i)-1])!=a){
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
	return 0;
}