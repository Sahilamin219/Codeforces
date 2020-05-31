#include <bits/stdc++.h>
#define f(i,a,b) for(long long int i=a;i<b;i++)
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    f(i,0,n)cin>>v[i];
    sort(v.begin(), v.end());
    if(k==0 and v[0]==1)cout<<-1;
    else if(k==0 and v[0]!=1)cout<<v[0]-1;
    else if(v[k]!=v[k-1])cout<<v[k-1];
    else{
        cout<<-1;
    }
    return 0;
}