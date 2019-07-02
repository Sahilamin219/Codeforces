#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define ll long long
#define mod 1000000007
#define bitcount    __builtin_popcountll
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define pi pair<int,int>
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,i,j;
    string s[102];
    sd(n);
    for(i=0;i<n;i++)
    {
    	cin>>s[i];
    	for(j=0;j<i;j++)
    	{
    		if(s[i]==s[j])
    			break;
    	}
    	if(j==i)
    		printf("NO\n");
    	else
    		printf("YES\n");
    }
    return 0;
}
