#include "bits/stdc++.h"
#define int long long
#define mod 1000000007
#define all(x) x.begin(), x.end()
using namespace std;
vector<int> ans;
int D=0;
void depth(vector<int> v ,int l, int r, int D){
    if(l<r){
        int ma=-1 , ind=-1;
        for(int i=l;i<r;i++){
            if(ma<v[i])ma=v[i],ind=i;
        }
        ans[ind]=D;
        depth(v, l, ind, D+1);
        depth(v, ind+1, r, D+1);
    }
}
void Solve_cf(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    ans.clear();
    ans=vector<int>(n);
    D=0;
    depth(v, 0, n, D);
    for(auto x: ans)cout<<x<<" ";
        cout<<"\n";
}
int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int TestCase=1;cin>>TestCase;
	while(TestCase--)Solve_cf();
	return 0;
}