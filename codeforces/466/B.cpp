#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast
    ll n,a,b;cin>>n>>a>>b;
    n=6*n;
    if(a*b>=n)cout<<(a*b)<<"\n"<<a<<" "<<b;
    else{
    	bool flag = 0;
        if (a > b)
        {
            swap(a, b);flag = 1;
        }
        long long area = 1e18, a1, b1, temp;
        for(long long i = a; i*i <= 6*n; ++i) {
            temp = n/i;
            if (temp*i<n) temp++;
            // if (temp<b) continue;
            if(temp>=b){
	            if (temp*i<area) {
	                area=temp*i;
	                a1=i;
	                b1=temp;
	            }
	        }
        }
        if(flag)swap(a1, b1);
        cout << area << "\n" << a1 << " " << b1 << "\n";
    }
    return 0;
}