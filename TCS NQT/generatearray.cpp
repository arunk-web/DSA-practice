// infosys
#include<bits/stdc++.h>
using namespace std;

// int f(int k,vector<int> &v){
    
//     if(k == 0)return 0;
//     if(k == 1) return 1;

//     if(k%2 == 0){
//         v[k] = v
//     }

// }

// int main(){
//     int n;cin>>n;
//     vector<int> v(n+1);



//     return 0;
// }
int main(){
    int n;cin>>n;

    if(n == 0){
        cout<<0<<endl;
        return 0;
    }



    vector<int> v(n+1);
    v[0] = 0;
    v[1] = 1;

    for(int i = 1 ; i <= n/2 ; i++){
        if(i*2 <= n){
            v[2*i] = v[i];
        }
        if(2*i+1 <= n){
            v[2*i+1] = v[i] + v[i+1];
        }
    }

    for(int i = 0 ; i <= n ; i++){
        cout<<v[i]<<" ";
    }
    
}