#include<bits/stdc++.h>
using namespace std;

int maxipro(vector<int> &v,int n){
    int maxi = INT_MIN;
    int pre = 1;
    int suff = 1;

    for(int i = 0 ; i < n ; i++){
        if(pre == 0) pre = 1;
        if(suff == 0) suff = 1;
        
        pre *= v[i];
        suff *= v[n-i-1];

        maxi = max(maxi,max(pre,suff));
    }

    return maxi;
}

int main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }

    cout<<maxipro(v,n);


    return 0;
}