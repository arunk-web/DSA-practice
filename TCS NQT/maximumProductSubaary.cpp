#include<bits/stdc++.h>
using namespace std;

int findmax(vector<int> &v, int n){
    int maxi = INT_MIN;

    int prefix = 1;
    int suffix = 1;

    for(int i = 0 ; i < n ; i++){

        if(prefix == 0) prefix = 1;
        if(suffix == 0) suffix = 1;

        prefix = prefix*v[i];
        suffix = suffix*v[n-i-1];

        maxi = max(maxi,max(prefix,suffix));
    }

    return maxi;
}
int main(){
    int n;cin>>n;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }


    cout<< findmax(v,n);


    return 0;
}