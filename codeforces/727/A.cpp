#include <bits/stdc++.h>
using namespace std;
template<typename T>
T i_move1 (T& a){cerr<<"OK1 ";return a*=2;}
template<typename T>
T i_move2 (T& a){cerr<<"OK2 ";return (a*=10)++;}

long long make_change(int a, long long& n);

// typedef array<int, 2> moves;
typedef vector<int> state ;

int32_t main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int T=1,i,j;//cin>>T;
	while(T--)
	{
		long long a,b;cin>>a>>b;
		auto my_bfs = [](int a, int b)->tuple<int, int, state>
		{
			priority_queue<pair <long long, state > , vector<pair <long long, state >> , greater<pair <long long, state >> > q;
			state arr, correct_arr;
			q.push( {a, arr} );
			int pos=0, cur=0;
			while(!q.empty())
			{
				long long num = q.top().first;
				state update = q.top().second;
				q.pop();
				long long next_1 = num*2;
				long long next_2 = num*10 + 1;
				if(next_2 == b or next_1 == b){
					correct_arr=update;
					cur = (next_1 == b ? 1  : 2);
					correct_arr.push_back(cur);
					pos=1;break;
				}
				if(next_1 > b and next_2 > b)break;
				update.push_back(1);
				q.push( { next_1, update} );
				update.pop_back();
				update.push_back(2);
				q.push( { next_2, update} );
			}
			return { pos, correct_arr.size(), correct_arr };
		};
		tuple<int, int, state> solve = my_bfs(a,b);
		int possible=get<0>(solve);
		int total__steps__=get<1>(solve);
		cout <<(possible ? "YES\n" : "NO\n");
		if(possible)
		{
			cout<<total__steps__ + 1<<"\n"<<a<<" ";
			state which_are = get<2>(solve);
			for(i=0;i<total__steps__;i++){
				cout<<(make_change(which_are[i], a) )<<" ";
			}
		}
	}
}

long long make_change( int a, long long &n)
{
	if(a==1)i_move1(n);
	else i_move2(n);
	return n;
}