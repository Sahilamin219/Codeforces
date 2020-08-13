#include <bits/stdc++.h>
#define sz(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--)
#define pb push_back
#define mkp make_pair
#define mod 1000000009
#define MAX 100000
#define all(x) x.begin(), x.end()
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    vector<ll> v(n);
    f(i,0,n)cin>>v[i];
    // vector<vector<ll>> a(10);
    // map<int, int> diff_Store;
    // f(i,0,n)
    // {
    //     if(sz(a[v[i]])==0)
    //     {
    //         m[a[v[i]]]=i;
    //     }
    //     else
    //     {
    //         a.push_back();
    //     }
    // }
    // for(auto x:a){for(auto y:x){cout<<y<<" ";}}
    // vector<pair<int,int>> pai;
    // f(i,0,10)
    // {
    //     if(sz(a[i]))
    //     {
    //         if(sz(a[i])==1)
    //         {
    //             pai.push_back(mkp(i, 0));
    //         }
    //         else
    //         {
    //             if(*max_element(all(a[i]))==*min_element(all(a[i])))
    //             {
    //                 pai.push_back(mkp(i, *max_element(all(a[i]))));
    //             }
    //         }
    //     }
    // }
    // cout<<endl<<sz(pai);
    // for(auto x:pai)
    // {
    //     cout<<x->first;
    // }
    vector<int> contain(100001,0);
    vector<int> bol(100001,0);
    unordered_map<int, int> m;
    int cnt=0;
    f(i,0,n)
    {
        if(bol[v[i]]==0)
        {
            bol[v[i]]=1;
            m[v[i]]=i;
            cnt++;
        }
        else
        {
            if(contain[v[i]]==0)
            {
                contain[v[i]]=i-m[v[i]];
                m[v[i]]=i;
            }
            else if(contain[v[i]]==i-m[v[i]] and contain[v[i]]!=-1)
            {
                m[v[i]]=i;
            }
            else if(contain[v[i]]!=-1)
            {
                contain[v[i]]=-1;cnt--;
            }
            bol[v[i]]=2;
        }
    }
    cout<<cnt<<endl;
    // for(auto  x:contain){cout<<x<<" ";}cout<<endl;
    // for(auto  x:bol){cout<<x<<" ";}cout<<endl;
    f(i,0,100001)
    {
        if(contain[i]>0 and bol[i]>1)
        {
            cout<<i<<" "<<contain[i]<<endl;
        }
        else if(bol[i]==1)
        {
            cout<<i<<" "<<0<<endl;
        }
    }
    /*
    erase(num) : Erases the value mentioned in its argument. 
    reorders the set after deletion.
    erase(iter) : Erases the value at the position pointed by
    the iterator mentioned in its argument.
    erase(strt_iter,end_iter) : Erases the range of elements 
    starting from “strt_iter” to the “end_iter
    */
    return 0;
}
// treap
// double k=log10(213);
// k-=floor(k);
// cout<<(pow(10,k));
// treap 