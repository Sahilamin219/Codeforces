#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int, int> pis; 
int main(){
    FAST;
    int n;
    cin>>n;
    vector <int> vec;
    int sum=0,avg=0;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        vec.push_back(val);sum+=val;
    }
    sort(vec.begin(), vec.end());
    sum=sum*10;
    int count=0;
    if(sum<45*n){
        int i=0;
        while(sum<45*n && i<n){
            if(vec[i]<5){
                count++;
                sum+=((5-vec[i])*10);
                i++;
                // break;
            }
        }
        cout<<count;
    }
    else{
        cout<<0;
    }
	return 0;
}