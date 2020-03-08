#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    fast;
    int n,ans=0,x=0,y;
    vector<int> arr;
    cin>>n;
    if(n==1){
        // continue;
    }
    else if(n==pow(2,ceil(log2(n)))){
        ans++;
        arr.push_back(ceil(log2(n)));
    }
    else{
        while(1){
            if( n!=1 && n!=pow(2,ceil(log2(n)))-1 ){
                ans++;
                x=(ceil(log2(pow(2,ceil(log2(n)))-n)));
                // cout<<x<<" ";
                arr.push_back(x);
                y=pow(2,x)-1;
                n=n^y;
                if(n!=1 && n!=pow(2,ceil(log2(n)))-1 ){
                    n++;
                    ans++;
                }
                else{
                    break;
                }
            }
            else{
                break;
            }
        }
    }
    cout<<ans<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}