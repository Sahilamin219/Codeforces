#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n,x,y,mn=0;
	cin >> n >> x >> y;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<n;i++){
		if(a[i]<a[mn])
			mn=i;
		if(i-mn>=y)
			break;
	}
	cout << mn+1 << endl;
}
