#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int a[n],b[m];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<m;i++)cin>>b[i];
	
	set<int> fac;
	
	for(int  i=1;i<=sqrt(k);i++)
	{
		if((k%i)==0){fac.insert(i);fac.insert(k/i);}
	}	
	ll ans=0;
	int prea[n+1];memset(prea, 0, sizeof prea);
	int preb[m+1];memset(preb, 0, sizeof preb);
	for(int i=1;i<=n;i++)prea[i]=a[i-1]+prea[i-1];
	for(int i=1;i<=m;i++)preb[i]=b[i-1]+preb[i-1];
	for(auto x:fac)
	{
		int length=x, breadth=k/x;
		//cout<<"l "<<length<<" "<<breadth<<"\n";
		ll la=0, bb=0;int j;
		for(int i=0;i<=n-length;i++)
		{
			j=i+length;
			ll ct=prea[j]-prea[i];
			if(ct==length)la++;
			
			
		}
		for(int i=0;i<=m-breadth;i++)
		{
			j=i+breadth;
			ll ct=preb[j]-preb[i];
			if(ct==breadth)bb++;
			
			
		}
		ans=ans+bb*la;
		
		
		
		
	}
	cout<<ans;
	
	
}