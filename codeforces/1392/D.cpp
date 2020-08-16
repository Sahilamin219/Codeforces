#include <bits/stdc++.h>
#define sz(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
{ return (a.second < b.second); } 
double ans=0;int n;
double c;
map<pair<int,double>, double> store;
int dp(vector<pair<double, double>> v, double c, int index, double loc_ans)
{
    if((c<=0 or index>=n) and store[{index,c}]==0)
        {
            ans=max(ans, loc_ans);
            store[{index,c}]=ans;
            return ans;
        }
    else if(c>=v[index].second and store[{index,c}]==0)
    {
        store[{index,c}]=max(dp(v,c,index+1,loc_ans), dp(v,c-v[index].second,index+1,loc_ans+v[index].first));
        return store[{index,c}];
    }
    else if(store[{index,c}]==0)
    {
        store[{index,c}]=max(dp(v,0,index+1,loc_ans + (v[index].first)*(c/v[index].second) ), dp(v,c,index+1,loc_ans));
        return store[{index,c}];;
    }
    return store[{index,c}];
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        string s;
        cin>>s;
        ll ans=0;
        vector<ll> v(n,1);
        f(i,0,n)
        {
            ll j=(i+1)%n;
            ll k=(i-1)%n;
            if(k<0)k=n-1;
            if(s[i]==s[k] and s[i]==s[j])
            {
                v[i]=0;
            }
        }
        ll i=0,si=0;
        // for(auto x:v){cout<<x<<" ";}
            // cout<<"\n";
        while(i<n and v[i]==0)i++;
        si=i;
        ll cnt=0;
        while(i<n+si)
        {
            if(v[(i%n)]==0)
            {
                ll temp1=i;
                while(i<n+si and v[(i%n)]==0)
                {
                    i++;
                }
                ll temp2=i-1;
                long double l=(temp2 - temp1 +1);
                if(l>0.00 and l<=3.00)ans+=1;
                else
                {
                    ans+=ll(ceil(l/3.00));
                }
            }
            i++;
        }
        // if(cnt>3)ans+=ceil(cnt/3);
        // else if(cnt){ans+=1;}
        // // cout<<cnt<<" ";
        cout<<ans<<endl;
    }   
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;cin>>n;
//     vector<unordered_map<int,int>> m(n+1);
//     for(auto i: m){cout<<i.first<<" "<<i.second<<endl;}
//     for(int i=0;i<n-1;i++)
//     {
//         int u,v;cin>>u>>v;
//         v[u]
//     }
//     return 0;
// }