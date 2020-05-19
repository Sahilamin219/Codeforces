#include <bits/stdc++.h>
using namespace std;
int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2 and y1==y2){
        cout<<-1;
    }
    else if(x1==x2){
        int d=abs(y2-y1);
        cout<<x1+d<<" "<<y1<<" "<<x1+d<<" "<<y2; 
    }
    else if(y1==y2){
        int d=abs(x2-x1);
        cout<<x1<<" "<<y1+d<<" "<<x2<<" "<<y1+d; 
    }
    else{
        if(abs(y2-y1)==abs(x2-x1)){
            int d=abs(y2-y1);
            cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
        }
        else{
            cout<<-1;
        }
    }
    return 0;
}