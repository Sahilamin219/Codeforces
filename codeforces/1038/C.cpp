#include <bits/stdc++.h>
#define sz(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--)
#define pb push_back
#define mkp make_pair
#define mod 1000000009
#define MAX 100000
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    int n;cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    f(i,0,n)cin>>a[i];
    f(i,0,n)cin>>b[i];
    sort(all(a));
    sort(all(b));
    ll player_1=0,player_2=0;
    ll i=n-1,j=n-1,flag=0;
    while(i>=0 or j>=0)
    {
        if(i>=0 and j>=0 and a[i]>=b[j] and flag==0)
        {
            player_1+=a[i];
            i--;
        }
        else if(j>=0 and flag==0)
        {
            j--;
        }
        else if(flag==0)
        {
            player_1+=a[i];
            i--;
        }
        if(i>=0 and j>=0 and a[i]<=b[j] and flag)
        {
            // cout<<a[i]<<"--"<<b[j]<<endl;
            player_2+=b[j];
            j--;
        }
        else if(i>=0 and flag)
        {
            // cout<<a[i]<<"--"<<b[j]<<endl;
            i--;
        }
        else if(flag)
        {
            // cout<<a[i]<<"--"<<b[j]<<endl;
            player_2+=b[j];
            j--;
        }
        flag=!flag;
        // cout<<player_1<<" "<<player_2<<endl;
    }
    cout<<player_1-player_2;
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