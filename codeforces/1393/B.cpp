#include <bits/stdc++.h>
#define sz(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define all(x) x.begin(), x.end()
using namespace std;
typedef long long int ll;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    map<int, int> m;
    int square=0,rectangle=0;
    f(i,0,n)
    {
        int val;cin>>val;
        m[val]++;
    }
    for(auto i:m)
    {
        square+=i.second/4;
        rectangle+=(i.second%4==2 or i.second%4==3);
    }
    int q;cin>>q;
    while(q--)
    {
        char t;cin>>t;
        int x;cin>>x;
        if(t=='+')
        {
            if(m[x]%4==3)
            {
                square++;
                rectangle--;
            }
            else if(m[x]%4==1)
            {
                rectangle++;
            }
            m[x]++;
            if( (square>0 and rectangle>=2) or (square>=2) )
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else
        {
            if(m[x]%4==0)
            {
                square--;
                rectangle++;
            }
            else if(m[x]%4==2)
            {
                rectangle--;
            }
            m[x]--;
            if( (square>0 and rectangle>=2) or (square>=2) )
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}