#include<bits/stdc++.h>
using namespace std;

#define fi                      first
#define se                      second
#define pb                      push_back
#define endl                    '\n'
#define all(x)                  x.begin(),x.end()
#define pii                     pair<int,int>
#define pll                     pair< long long int, long long int> 
#define fast                    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define SZ(x)                   ((int)x.size())

#define FOR(i,a,b)              for(int i = a; i < b; ++i)
#define REV(i,a,b)              for(int i = a; i >= b; --i)
#define FORE(i,a,b)             for(int i = a; i <= b; ++i)

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

int main()
{
        fast;
        int n,t;
        cin >> n >> t;
        string a,b;
        cin >> a >> b;
        int eq = 0, neq = 0;
        FOR(i,0,n) {
        	if(a[i] == b[i]) {
        		eq++;
        	}
        	else {
        		neq++;
        	}
        }
        int k = n - t;
        string c = a;
        fill(all(c),'*');
        if(eq >= k) {
            // cout<<"yea";
        	FOR(i,0,n) {
        		if(!k) {
        			break;
        		}
        		if(a[i] == b[i]) {
        			c[i] = a[i];
        			k--;
        		}
        	}
        	FOR(i,0,n) {
        		if(c[i] == '*') {
        			for(char ch = 'a'; ch <= 'z'; ++ch) {
        				if(ch != a[i] and ch != b[i]) {
        					c[i] = ch;
        					break;
        				}
        			}
        		}
        	}
        	cout << c << endl;
        	return 0;
        }
        k -= eq;
        if(neq/2 >= k) {
        	k += eq;
        	int p = min(neq/2,k), q = min(neq/2,k);
        	k -= min(neq/2,k);
        	if(k-eq > neq/2) {
        		cout << -1 << endl;
        		return 0;
        	}
        	FOR(i,0,n) {
        	    if(c[i] == '*' and a[i] == b[i] and k > 0) {
        			c[i] = a[i];
        			k--;
        		}
        		else if(c[i] == '*' and a[i] != b[i] and p > 0) {
        			c[i] = a[i];
       				p--;
        		}
        		else if(c[i] == '*' and a[i] != b[i] and q > 0) {
        			c[i] = b[i];
       				q--;
        		}
        	}
        	FOR(i,0,n) {
        		if(c[i] == '*') {
        			for(char ch = 'a'; ch <= 'z'; ++ch) {
        				if(ch != a[i] and ch != b[i]) {
        					c[i] = ch;
        					break;
        				}
        			}
        		}
        	}
        	cout << c << endl;
        	return 0;
        }
        cout << -1;
}