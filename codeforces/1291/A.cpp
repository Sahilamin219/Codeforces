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
        string s;cin>>s;
        ll odd=0;
        for(char i:s)
        {
            if((i-'0')&1)odd++;
        }
        if(odd<=1){cout<<-1<<endl;continue;}
        else
        {
            int cnt=2;
            for(char i:s)
            {
                if((i-'0')&1)cout<<i,cnt--;
                if(!cnt)break;
            }
            cout<<"\n";
        }
    }
    return 0;
}