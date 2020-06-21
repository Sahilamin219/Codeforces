// i m n't bored yet ...
#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
int n,m;
// vector<string> v;
bool can(int m, int s)
{
    return s >= 0 && s <= 9 * m;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int m,s;cin>>m>>s;
	int sum = s;
	string minn;
	string maxx;
    for (int i = 0; i < m; i++){
        for (int d = 0; d < 10; d++){
            if ((i > 0 || d > 0 || (m == 1 && d == 0)) && can(m - i - 1, sum - d))
            {
                minn += char('0' + d);
                sum -= d;
                break;
            }
        }
    }
    sum=s;
    for (int i = 0; i < m; i++){
        for (int d = 9; d > -1; d--){
            if ((i > 0 || d > 0 || (m == 1 && d == 0)) && can(m - i - 1, sum - d))
            {
                maxx += char('0' + d);
                sum -= d;
                break;
            }
        }
    }
    if((m>1 and minn[0]=='0') or (sum > 9 * m))minn="-1";
    if((m>1 and maxx[0]=='0') or (sum > 9 * m))maxx="-1";
    cout<<minn<<" "<<maxx;
	return 0;
}
// cout.flush();
// fflush(stdout);