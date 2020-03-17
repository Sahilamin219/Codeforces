#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int, int> pis; 
int main(){
    FAST;
    int n;
    cin>>n;
    vector <int> vec(100001,0);
    int max=0;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        vec[val]++;
        if(max<val){
            max=val;
        }
    }
    if(vec[max]%2==1){
        cout<<"Conan";
        return 0;
    }
    else{
        for(int i=0;i<vec.size();i++){
            if(vec[i]%2==0){
                vec[i]=0;
            }
        }
        // sort(vec.begin(), vec.end());
        int m=*max_element(vec.begin(), vec.end());
        if(m>0){
            cout<<"Conan";
            return 0;
        }
        else{
            cout<<"Agasa";
            return 0;
        }
    }
	return 0;
}