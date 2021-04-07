#include "bits/stdc++.h"

using namespace std;
typedef long long ll;

int main() {
	ll n,m,k;
	cin >> n >> m >> k;
	vector<ll> a(n);
	vector<ll> b(m);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < m; ++i) {
		cin >> b[i]; 
	}
	vector<ll> v;
	for (ll i = 1; i*i <= k; ++i) {
		if(k%i == 0) {
			v.push_back(i);
			if(i*i == k)continue;
			v.push_back(k/i);
		}
	}
	//v.push_back(k);
	ll ans = 0;
	for (int i = 0; i < (int)v.size(); ++i) {
		ll cnt = 0;
		ll x = 0;
		ll y = 0;
		for (int j = 0; j < n; ++j) {
			if (a[j] == 1) {
				cnt++;
			}
			if (a[j] == 0) {
				cnt = 0;
			}
			if (cnt >= v[i]) {
				x++;
			} 
		}
		cnt = 0;
		for (int j = 0; j < m; ++j) {
			if (b[j] == 1) {
				cnt++;
			}
			if (b[j] == 0) {
				cnt = 0;
			}
			if (cnt >= k/v[i]) {
				y++;
			} 
		}
		ans += x*y;
	}
	cout << ans;
	return 0;
}















