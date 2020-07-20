#include <bits/stdc++.h>
#define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--)
#define pb push_back
#define all(x) x.begin(), x.end()
using namespace std;
typedef long long int ll;
int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // int t;cin>>t;
    int t=1;
    while(t--){
        int n;cin>>n;
        vector<vector<int>> v(n+1);
        f(i,0,n-1)
        {
            int a;cin>>a;
            // v[i+1].pb(a);
            v[a].pb(i+2);
        }
        // for(auto x:v){for(auto y: x){cout<<y<<" ";}cout<<endl;}
        int flag=1;
        f(i,1,n+1)
        {
            if(v[i].size()!=0 and v[i].size()<3){flag=0;break;}
            int cnt=0;
            if(v[i].size()!=0){
                f(j,0,v[i].size())
                {
                    if(v[v[i][j]].size()==0)cnt++;
                    if(cnt>=3){break;}
                }
                // cout<<cnt<<" ";
                if(cnt<3){flag=0;break;}
            }
        }
        // f(i,1,n+1)
        // {
        //     if(v[i].size()!=0)
        //     {
        //         if(s(v[i])!=3){flag=0;break;}
        //     }
        // }
        if(flag){cout<<"YES";}
        else{cout<<"NO";}
    }
    return 0;
}