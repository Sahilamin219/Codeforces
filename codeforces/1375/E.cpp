#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    vector<ll> v(n);f(i,0,n)cin>>v[i];
    vector<ll> ans;
    vector<ll> ind(n);f(i,0,n)ind[i]=i+1;
    f(i,1,n){
        f(j,0,i){
            f(k,1,i+1){
                if(v[k]<v[k-1]){
                    swap(v[k],v[k-1]);
                    ans.push_back(ind[k-1]);
                    ans.push_back(ind[k]);
                    swap(ind[k],ind[k-1]);
                }
            }
        }
    }
    cout<<s(ans)/2<<"\n";
    r(x,s(ans)-1,-1){cout<<ans[x-1]<<" "<<ans[x]<<endl;x--;}
    return 0;
}