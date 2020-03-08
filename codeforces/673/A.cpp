#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> a;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        a.push_back(val);
    }
    int t=0;
    int store=0;
    if(a.size()==1){
        if(a[0]<16){
            store=a[0];
        }
        else{
            store=0;
        }
    }
    else if(a[0]>15){
        store=0;
    }
    else{
        for(int i=0;i<n;i++){
            if(a[i+1]-a[i]>15){
                store=a[i];
                break;
            }
            else{
                store=a[i];
            }
        }
    }
    // cout<<"s"<<store;
    if(store+15<=90){
        cout<<store+15<<endl;   
    }
    else if(75<=store<=90){
        cout<<90<<endl;
    }
    else{
        cout<<store<<endl;  
    }
    return 0;
}