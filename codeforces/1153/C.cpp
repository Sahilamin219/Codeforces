#include <bits/stdc++.h>
using namespace std;
 
int n, kol, p, m, sum;
int a[1000000];
char ch;
string s;
 
int main()
{
	cin >> n;
	cin >> s;
	kol = n / 2;
	for (int i = 0; i < n; i++) if (s[i] == '(') p++;
 
	if (n % 2 == 1)
	{
		cout << ":(" << endl;
		return 0;
	}
 
	if (p > kol)
	{
		cout << ":(" << endl;
		return 0;
	}
 
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '?') if (p < kol) { s[i] = '('; p++; } else s[i] = ')';
		if (s[i] == '(') sum++; else sum--;
		if (sum <= 0 && i!=n-1)
		{
			cout << ":(" << endl;
			return 0;
		}
	}
 
	cout << s;
}