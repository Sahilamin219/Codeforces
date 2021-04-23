#include "bits/stdc++.h"
#define int long long int
using namespace std;
typedef vector<int> vi;
const int maxn=3001;
int INT_MAXI=1000000001;
void solve(){
    int n, m;cin>>n>>m;
    vector<vector<int>> v(n, vector<int> (m)), a(n, vector<int> (m, -1));
    for(int i=0;i<n;i++){
        for(int j=0, vl;j<m;j++)
        {
            cin>>v[i][j];
        }
        sort(v[i].begin(), v[i].end());
    }
    vector<int> Ind(n ,0);
    int cur=0;
    for(int i=0;i<m;i++){
        int vl=INT_MAXI, p=-1;
        for(int j=0;j<n;j++){
            if( Ind[j] < m and v[j][Ind[j]] < vl){
                p=j;
                vl= v[j][Ind[j]];
            }
        }
        v[p][Ind[p]]=-1;
        a[p][i]=vl;
        Ind[p]++;
    }
    for(int i=0;i<n;i++){
        int p=0;
        while(p<m and v[i][p]==-1)p++;
        for(int j=0;j<m;j++){
            if( a[i][j] == -1){
                a[i][j]=v[i][p];
                p++;
            }
            while(p<m and v[i][p]==-1)p++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int32_t main(){ 
  int t;cin>>t;
  while(t--)solve();
}