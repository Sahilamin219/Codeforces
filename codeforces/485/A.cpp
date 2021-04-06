#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll

int32_t main()
{
	int a,m;
	cin>>a>>m;
	int iter=21;
	
	while(iter--)
	{
		if(a%m==0){puts("Yes");return 0;}
		a=a+a%m;
	}
	puts("No");
}