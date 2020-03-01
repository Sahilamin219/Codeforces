#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> a;
    vector <int> b;
    int p=0;
    int count_a=0;//,count_b=0;
    int flag[n]={0};
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        a.push_back(value);
        if(value==1){
            // count_a++;
            flag[i]=1;
        }
    }
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        b.push_back(value);
        if(value==1){
            // count_b++;
            flag[i]=0;
        }
    }
    int check=0;
    for(int i=0;i<n;i++){
        if(flag[i]==1){
            check=1;
            count_a++;
            // break;
        }
        else{
            continue;
        }
    }
    // cout<<"ais"<<count_a;
    if(check==1){
        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                continue;
            }
            else{
                if(a[i]==0){
                    p++;
                    // cout<<"i-is"<<i<<" ";
                }
                // else if(b[i]==0){
                //     if(p<=0){
                //         continue;
                //     }
                //     else{
                //         p--;
                //         cout<<"here"<<i;
                //     }
                // }
            }
        }
        // cout<<"pis"<<p<<endl;
        p=p/count_a;
        cout<<p+1<<endl;
    }
    else{
        p=-1;
        cout<<p<<endl;
    }
    return 0;
}