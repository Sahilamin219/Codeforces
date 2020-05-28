#include <bits/stdc++.h>
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--)
using namespace std;
typedef long long ll;
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    vector<ll> v(n,0);
    f(i,0,n)cin>>v[i];
    vector<ll> sv;
    sv=v;
    sort(sv.begin(),sv.end());
    if(sv==v or n==1){
      cout<<"yes"<<"\n";
      cout<<1<<" "<<1;
    }
    else{
      if(n==2){
        cout<<"yes"<<"\n";
        cout<<1<<" "<<2;
      }
      else{
        map<ll,ll> m;
        f(i,0,n)m[sv[i]]=i;
        f(i,0,n)v[i]=m[v[i]];
        ll l=-1,r=-1;
        // for(auto x:v)cout<<x<<" ";
        // cout<<"\n";
        f(i,0,n)if(v[i]!=i){
          v[i]=i;l=i;break;
        }
        r(i,n-1,-1)if(v[i]!=i){
          v[i]=i;r=i;break;
        }
        int bokmrk=0;
        // for(auto x:v)cout<<x<<" ";
        // cout<<"\n";
        reverse(v.begin()+l+1,v.begin()+r);
        // for(auto x:v)cout<<x<<" ";
        // cout<<"\n"; 
        f(i,0,n)if(v[i]!=i)bokmrk=1;
        if(bokmrk)cout<<"no";
        else{
          cout<<"yes\n"<<l+1<<" "<<r+1;
        }
      }
   }
    return 0;
}