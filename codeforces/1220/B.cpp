#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);cin.tie(NULL);
	int n;cin >> n;
	long long a[n];
	long long m[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> m[i][j];
		}
	}
	for(int i = 0; i < n; i++)
	{
		a[i] = sqrt(m[i][(i + 1) % n] * m[i][(i + 2) % n] / m[(i + 1) % n][(i + 2) % n]);
	}
	cout << a[0];
	for(int i = 1; i < n; i++) cout << " " << a[i];
	return 0;
}