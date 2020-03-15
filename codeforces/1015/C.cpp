#include <bits/stdc++.h>
#define n(a) int(a.size())
#define fori(i,a,b) for(int i=a;i<b;i++) 
using namespace std;

int main()
{
    long long int n,m;
    cin>>n>>m;
    vector<int> va;
    vector <int> vb;
    vector <int> d;
    long long int sum=0;
    fori(i,0,n){
        long long int x;cin>>x;
        va.push_back(x);
        sum+=x;
        long long int y;cin>>y;
        vb.push_back(y);
        d.push_back(x-y);
    }
    sort(d.rbegin(), d.rend());
    long long int k=0;
    while(sum>m){
        sum-=(d[k]);
        k++;
        if(k==d.size() && sum>m){
            cout<<-1;
            return 0;
        }
    }
    cout<<k;
    return 0;
}
