#include <bits/stdc++.h>
#define endl "\n";
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
double maximum = numeric_limits<double>::max();
double inf = numeric_limits<double>::infinity();
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast;
    int b,k;cin>>b>>k;
    vector<int> v(k,0);
    f(i,0,k)cin>>v[i];
    ll sum=0;
    if(b%2==0){
        //only last digit matters
        if(v[k-1]%2){
            cout<<"odd";
        }
        else{
            cout<<"even";
        }
    }
    else{
        //b^k is odd count no of odd sum
        int count=0;
        f(i,0,k)if(v[i]%2)count++;
        if(count%2==0){
            cout<<"even";
        }
        else{
            cout<<"odd";
        }
    }
    return 0;
}