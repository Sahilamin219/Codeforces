#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <vector>
#include <unordered_map>
#include <utility> 
#define fori(i,m,n) for(int i=m;i<n;i++)
using namespace std;
typedef long long ll;
int main() {
    ll n;
    cin>>n;
    ll s=n;
    vector <ll> v;
    ll sum=0;
    while(n--){
        ll val;
        cin>>val;
        v.push_back(val);
        sum+=val;
    }
    sort(v.begin(), v.end());
    if(sum%2==1){
        ll i=0;
        while(v[i]%2!=1){
            i++;
        }
        sum-=v[i];
    }
	cout<<sum<<"\n";
	return 0;
}