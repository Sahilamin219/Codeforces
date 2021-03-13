#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(auto &i:a)cin>>i;
	int ans=-1;
	for(int i=0;i<n-1;i++)
	if(a[i]>a[i+1])ans=i;
	
	cout<<ans+1;
}