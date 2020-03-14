#include <iostream>
#include <vector>
#include <math.h>
#include <stack>
#include <limits>
#include <bits/stdc++.h>
#define n(a) int(a.size())
// #define SZ(x)                   ((int)x.size())
#define fori(i, a, b) for (int i = a; i < b; i++)
#define veti vector <pair<int,int>> v
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        set <int> v;
        fori(i,0,n){
            int y;
            cin>>y;
            v.insert(y);
        }
        cout<<v.size()<<endl;
    }
    return 0;
}
