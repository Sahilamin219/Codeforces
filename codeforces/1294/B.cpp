#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
int main(){
    FAST;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int, int>> pairVec;  // create a vector of pairs
        for (int i=0;i<n;i++) {
            int x,y;
            cin>>x>>y;
            pairVec.emplace_back(x, y); // adding pairs to the vector
        }
        sort(pairVec.begin(), pairVec.end());
        // for (auto iter : pairVec) {
        //     std::cout << "First: " << iter.first << ", Second: "
        //     << iter.second << std::endl;
        // }
        string s="";int k=1;
        // bool IsFirstAndSecondSame(vector<pair<T, T>> myVector)
        // {
        //     for(auto valuePair : myVector)
        //     {
        //       if(valuePair.first != valuePair.second) 
        //           return false;
        //     }
        //     return true;
        // }
        pair<int, int> v;
        v=make_pair(0, 0);//origin starting position
        for(int i=0;i<n;i++){
            int dx,dy;  
            dx=pairVec[i].first - v.first;
            if(dx<0){
                cout<<"NO"<<endl;
                k=0;
                break;
            }
            dy=pairVec[i].second -v.second;
            if(dy<0){
                cout<<"NO"<<endl;
                k=0;
                break;
            }
            v=pairVec[i];
            while(dx--){
                s+="R";
            }
            while(dy--){
                s+="U";
            }
        }
        if(k==1){
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
    }
	return 0;
}