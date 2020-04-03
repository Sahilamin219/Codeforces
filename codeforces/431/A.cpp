#include <bits/stdc++.h>
#define n(a) int(a.size())
#define fori(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int a[4];//,b,c,d;
    // cin>>a>>b>>c>>d;
    fori(i,0,4){
        cin>>a[i];
    }
    string s;
    cin>>s;
    int m=n(s);
    long long int sum=0;
    while(m--){
        sum+=a[(s[m]-'0')-1];
    }
    cout<<sum<<"\n";
    // long long int n,m;
    // cin>>n>>m;
    // vector<int> va;
    // vector <int> vb;
    // vector <int> d;
    // long long int sum=0;
    // fori(i,0,n){
    //     long long int x;cin>>x;
    //     va.push_back(x);
    //     sum+=x;
    //     long long int y;cin>>y;
    //     vb.push_back(y);
    //     d.push_back(x-y);
    // }
    // sort(d.rbegin(), d.rend());
    // long long int k=0;
    // while(sum>m){
    //     sum-=(d[k]);
    //     k++;
    //     if(k==d.size() && sum>m){
    //         cout<<-1;
    //         return 0;
    //     }
    // }
    // cout<<k;
    return 0;
}
