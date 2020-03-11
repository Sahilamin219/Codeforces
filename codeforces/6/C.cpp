#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    deque <int> d;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        d.push_back(val);
    }
    int alice=0,bob=0; 
    int alice_s=0,bob_s=0;
    alice_s+=d[0];
    alice++;
    d.pop_front();
    while(d.size()!=0){
        if(alice_s>bob_s){
            bob_s+=d[d.size()-1];
            bob++;
            d.pop_back();
        }
        if(d.size()!=0){
            if(alice_s<=bob_s){
                    alice_s+=d[0];
                    alice++;
                    d.pop_front();
            }
        }
    }
    cout<<alice<<" "<<bob;
	return 0;
}