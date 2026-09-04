#include<bits/stdc++.h>
using namespace std;

//code of second smallest

// int secondSmall(vector<int> &v , int n){
//     int small = INT_MAX;
//     int secsmall = INT_MAX;

//     for(int i = 0 ; i < n ; i++){
//         if(v[i] < small){
//             secsmall = small;
//             small = v[i];
//         }
//         else if(v[i] > small && v[i] < secsmall){
//             secsmall = v[i];
//         }
//     }
//     return secsmall;
// }

// code of second largest

int secondlargest(vector<int> &v , int n){
    int lar = INT_MIN;
    int seclar = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        if(v[i] > lar){
            seclar = lar;
            lar = v[i];
        }
        else if(v[i] > lar && v[i] < seclar){
            seclar = v[i];
        }
    }

    return seclar;
}

int main(){
    int n;cin>>n;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }
    
    int val = secondlargest(v,n);

    cout<<"the ans is : " << val <<endl;
}