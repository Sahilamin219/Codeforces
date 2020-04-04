#include "bits/stdc++.h"
using namespace std;
// #define int long long int
#define endl "\n"
const int MOD=1e9+7;
#ifndef HOME
#define cerr if(0)cerr
#endif
// int count(int x){
//     if(x == 0){
//         return 1LL<<4;
//     }
//     if(x == 1){
//         return 1LL<<1;
//     }
//     if(x == 2){
//         return 1LL<<3;
//     }
//     if(x == 3){
//         return 1LL<<2;
//     }
//     if(x == 4){
//         return 1LL<<0;
//     }
//     if(x == 5){
//         return 1LL<<5;
//     }
//     return -1;
// }
string decToBinary(int n) 
{ 
    // array to store binary number 
    int binaryNum[32]; 
  
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order
    string s=""; 
    for (int j = i - 1; j >= 0; j--) 
        s+=to_string(binaryNum[j]);
    return s; 
} 
int binaryToDecimal(string m) 
{ 
    int n=stoi(m);
    int num = n; 
    int dec_value = 0; 
  
    // Initializing base value to 1, i.e 2^0 
    int base = 1; 
  
    int temp = num; 
    while (temp) { 
        int last_digit = temp % 10; 
        temp = temp / 10; 
  
        dec_value += last_digit * base; 
  
        base = base * 2; 
    } 
  
    return dec_value; 
} 
int count(int n){
    // n=(n||0LL);
    // cout<<"nis"<<n<<" ";
    string m="";
    string temp=decToBinary(n);
    for(int i=0;i<6-temp.size();i++){
        m+="0";
    }
    m+=temp;
    // cout<<"mis"<<m<<" ";
    string k="";
    k=m[5];
    m[5]=m[1];
    m[1]=k[0];
    k=m[3];
    m[3]=m[2];
    m[2]=k[0];
    // cout<<"mis"<<m<<" ";
    n=binaryToDecimal(m);
    //  cout<<"nownis"<<n<<" ";
    return n;
}
int main() {
    int n;
    cin>>n;
    int cnt = 0;
    cnt=count(n);
    // for(int i=0;i<=5;i++){
    //     if(n & (1LL<<i)){
    //         cout<<cnt<<" "<<count(i)<<"\n";
    //         cout<<i<<" ";
    //         cnt += count(i);
    //     }
    // }
    cout<<cnt<<endl;
    
    return 0;
    
}
 