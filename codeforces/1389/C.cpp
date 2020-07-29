#include <bits/stdc++.h>
#define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
using namespace std;
typedef long long int ll;
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
const int cons=501;
int get(ll a, vector<ll> v, ll l, ll h){
    if (a <= v[l])return l;
    if (a > v[h])return -1;
    ll mid=(l+h)/2;
    if(v[mid]==a or (mid+1<s(v) and v[mid]<a and v[mid+1]>=a))return (mid+1);
    else if(v[mid]==a or (mid-1>-1 and v[mid]>a and v[mid-1]<=a))return mid;
    else if(v[mid]>a) return get(a,v,l,mid);
    else {
        return get(a,v,mid,h);
    }
}
bool seive[100005];
void SieveOfEratosthenes(ll n)
{ memset(seive, true, sizeof(seive)); for (ll p=2; p*p<=n; p++) if (seive[p] == true) for (ll i=p*p; i<=n; i += p) seive[i] = false;}
ll ncr(ll n,ll m){
    ll ans=1;m=max(m,n-m);
    f(i,1,n-m){
        ans=(ans*(m+i))/i;
    }
    return ans;
}
int32_t main()
{
    int test;cin>>test;
    while(test--)
    {
        string s;cin>>s;
        ll n=s(s);
        ll ans=0;
        map<char, ll> m;
        ll maxi=0;
        f(i,0,n)
        {
            m[s[i]]++;
        }
        ll l=0;
        string mystring="1234567890";
        f(i,0,10)
        {
            l=max(l, m[mystring[i]]);
        }
        ll c=0;
        f(i,0,10)
        {
            f(j,0,10)
            {
                if(i!=j)
                {
                    int flag=0;
                    ll cnt=0;
                    f(k,0,n)
                    {
                        if(flag==0 and s[k]==mystring[i]){flag=1;cnt++;}
                        else if(flag==1 and s[k]==mystring[j]){flag=0;cnt++;}
                    }
                    c=max(c,cnt);
                }
            }
        }
        cout<<n-max(l, (c>>1)<<1)<<endl;
    }
    return 0;
}