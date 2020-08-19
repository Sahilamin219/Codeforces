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
void CountTriangles(vector<int> A) 
{   
    int n = A.size();   
    sort(A.begin(), A.end()); 
    int count = 0; 
    for (int i = n - 1; i >= 1; i--) { 
        int l = 0, r = i - 1; 
        while (l < r) { 
            if (A[l] + A[r] > A[i]) { 
                // If it is possible with a[l], a[r] 
                // and a[i] then it is also possible 
                // with a[l+1]..a[r-1], a[r] and a[i] 
                count += r - l; // checking for more possible solutions 
                r--; 
            } 
            else// if not possible check for higher values of arr[l] 
                l++; 
        } 
    } 
    cout << "No of possible solutions: " << count; 
} 
int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll a,b;cin>>a>>b;
    if(a>=b){cout<<(b-1)/2<<endl;}
    else
    {
        ll c=(2*a - b + 1)/2;
        cout<<max(0LL,c);
    }
    return 0;
}