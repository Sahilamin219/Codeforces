#include"bits/stdc++.h"
const char *p[6]={"abc","bca","cab","bac","acb","cba"};
const int N=2e5+10;
int dp[N][6],n,m,l,r;
char s[N];
int main()
{
	//to remove all palindromes, string will be one of the 6 permutations of abc repeated several times
	//dp[i][j] is moves to fix prefix i if base follows jth permutation	
	scanf("%d%d",&n,&m);
	scanf("%s",s+1);
	for(int i=1;i<=n;i++){
		for(int j=0;j<6;j++){
			dp[i][j]=dp[i-1][j]+(int)(s[i]!=p[j][i%3]);
		}
	}
	while(m--){
		scanf("%d%d",&l,&r);
		int ans=r-l+1;
		for(int j=0;j<6;j++){
			ans=std::min(ans, dp[r][j]-dp[l-1][j]);
		}
		printf("%d\n",ans);
	}
}

