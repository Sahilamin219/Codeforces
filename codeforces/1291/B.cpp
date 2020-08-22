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
{return (a.second < b.second);}
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
        ll n;
        cin>>n;
        vector<int> v(n);
        f(i,0,n)cin>>v[i];
        int flag=1;
        int i=0,j=n-1;
        int cnt=0;
        while(i<=j)
        {
            if(v[i]>=cnt and v[j]>=cnt)
            {

                if(j-i==1 and v[i]==v[j] and v[i]==cnt){flag=0;break;}
                i++,j--;cnt++;
            }
            else{flag=0;break;}
        }
        if(flag){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }
    return 0;
}