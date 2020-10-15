#include <iostream>
using namespace std;
 
int n, i, x, y, a[100100], b[100100];
 
int main() {
	cin >> n;
	for (i = 0; i < n; ++i) cin >> a[i] >> b[i], ++(a[x] < b[y] ? x : y);
	for (i = 0; i < n; ++i) cout << (i < max(x, n / 2) ? '1' : '0'); cout << endl;
	for (i = 0; i < n; ++i) cout << (i < max(y, n / 2) ? '1' : '0'); cout << endl;
	return 0;
}