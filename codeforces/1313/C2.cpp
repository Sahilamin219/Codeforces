//Totka hai dosto
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll

int32_t main()
{

	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> tmp;
	for(int i=0;i<n;i++)cin>>a[i];
	vector<int> rse(n,-1);	//find next smallest elements' index
	vector<int> lse(n,-1); //prev smallest elements' index
	stack<int> s;
	s.push(0);
	int cur=1;
	while(cur<n)
	{
		if(a[cur]>=a[s.top()])s.push(cur);
		else
		{
			while(!s.empty() and a[cur]<a[s.top()])
			{
				rse[s.top()]=cur;
				s.pop();
			}
			s.push(cur);
		}
		cur++;
	}
	while(!s.empty())
	{
		rse[s.top()]=-1;s.pop();
	}
	tmp=a;
	reverse(tmp.begin(),tmp.end());
	
	s.push(0);
	cur=1;
	while(cur<n)
	{
		if(tmp[cur]>=tmp[s.top()])s.push(cur);
		else
		{
			while(!s.empty() and tmp[cur]<tmp[s.top()] )
			{
				lse[s.top()]=cur;
				s.pop();
			}
			s.push(cur);
		}
		cur++;
	}
	while(!s.empty())
	{
		lse[s.top()]=-1;s.pop();
	}
	reverse(lse.begin(),lse.end());
	for(int i=0;i<n;i++)
	{
		if(lse[i]!=-1){lse[i]=n-1-lse[i];}
	}
	int j;
	vector<int> l(n);vector<int> r(n);
	for(int i=0;i<n;i++)
	{
		if(lse[i]==-1)l[i]=(i+1)*a[i];
		else
		{
			j=lse[i];
			l[i]=l[j]+(i-j)*a[i];
		}
		
	}
	
	for(int i=n-1;i>=0;i--)
	{
		if(rse[i]==-1)r[i]=(n-i)*a[i];
		else
		{
			j=rse[i];
			r[i]=r[j]+abs(j-i)*a[i];
		}
	}
	
	int pka=l[0]+r[0]-a[0];
	int peak=0;
	for(int i=1;i<n;i++)
	{
		if(l[i]+r[i]-a[i]>pka)
		{
			pka=l[i]+r[i]-a[i];
			peak=i;
		}
	}
	
	int mh=a[peak];
	
	//cout<<mh;
	peak++;
	vector<int> ans(n+1,0);
	for(int i=1;i<=n;i++)
	ans[i]=a[i-1];
	
	for(int i=peak-1;i>0;i--)
	if(ans[i]>ans[i+1])ans[i]=ans[i+1];
	for(int i=peak+1;i<=n;i++)
	if(ans[i]>ans[i-1])ans[i]=ans[i-1];
	
	for(int i=1;i<=n;i++)
	cout<<ans[i]<<" ";
	
	
	
	
	
	
	
	
	
	
	
	
	
}