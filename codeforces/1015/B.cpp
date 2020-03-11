#include <iostream>
#include <vector>
#include <math.h>
#include <stack>
#include <limits>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    string b;
    cin >> b;
    vector<int> arr(26, 0);
    for (int i = 0; i < a.size(); i++)
    {
        arr[a[i] - 'a']++;
    }
    for (int i = 0; i < b.size(); i++)
    {
        arr[b[i] - 'a']--;
    }
    vector<int> temp = arr;
    // for(int x=0;x<temp.size();x++){
    //     cout<<temp[x]<<" ";
    // }
    int flag = 1;
    sort(temp.rbegin(), temp.rend());
    if (temp[0] != 0 || temp[25] != 0)
    {
        flag = 0;
    }
    int ans = 0;
    vector<int> c;
    if (flag == 1)
    {
        while (a != b)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] != b[i])
                {
                    // ans++;
                    // c.push_back(i + 1);
                    int j = i + 1;
                    while (a[j] != b[i])
                    {
                        j++;
                        if (j == n-1)
                        {
                            break;
                        }
                    }
                    while(a[i] != b[i]){
                        ans++;
                        c.push_back(j);
                        // cout<<a[j-1]<<a[j]<<" ";
                        swap(a[j-1], a[j]);
                        // cout<<a<<" ";
                        j--;
                    }
                    // cout<<a[j-1]<<a[j]<<" ";
                }
            }
        }
        // cout<<a<<" "<<b<<endl;
        cout << ans << endl;
        for (auto &x : c)
        {
            cout << x << " ";
        }
    }
    else
    {
        cout << -1;
    }
    return 0;
}
