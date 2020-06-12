#include <bits/stdc++.h>
using namespace std;
#define newline cout<<"\n";
#define fine cout<<"FINE"; newline
typedef long long int ll;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;

	vector<ll> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];

	ll inf = 10000001;
	vector<ll> arr(inf, -1);
	ll j;
	for (ll i=2; i<inf; i++){
		if (arr[i] == -1){
			j = i;
			while(j<inf){
				arr[j] = i;
				j+=i;
			}
		}
	}

	vector<ll> d1(n, -1), d2(n, -1);

	for (ll i=0; i<n; i++){
		if (arr[a[i]] != -1){
			ll k = a[i];
			while(k%arr[a[i]] == 0){
				k = k/arr[a[i]];
			}
			if (k != 1){
				d1[i] = arr[a[i]];
				d2[i] = k;
			}
		}
	}
	for (int i=0; i<n; i++)  cout<<d1[i]<<" ";
	newline
	for (int i=0; i<n; i++)  cout<<d2[i]<<" ";
  	return 0;
}