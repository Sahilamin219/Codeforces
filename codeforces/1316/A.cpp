#include <iostream>
#include <bits/stdc++.h>
// #define vector <int> ivec
using namespace std;
// typedef long long ll
int main() {
    // ll n;
    // ivec v;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector <int> v;
        int sum=0;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            v.push_back(val);
            sum+=val;
        }
        if(sum<=m){
            cout<<sum<<endl;
        }
        else{
            cout<<m<<endl;
        }
    }
	return 0;
}