#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    int t = 0;
    vector<int> v;
    int values;
    for(int i =0;i<n;i++){
        cin >> values;
        v.push_back(values);
    }
    for(int i=0;i<n;i++){
        if(v[i]%2 == 0){
            v[i] = v[i]/2;
        }
        else{
            if(t%2 == 0){
                t++;
                v[i] =(v[i]+1)/2;
            }
            else{
                t++;
                v[i] =(v[i]-1)/2;
            }
    }
    }
    for(int i=0;i<n;i++){
        cout << v[i] << "\n";
    }
    return 0;
}