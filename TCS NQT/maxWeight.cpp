#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &v,int n,int weight){
    int cnt = 0;
    int l = 0 , r = 0;
    int sum = 0;
    int used = 0;

    while(r < n){
        sum += v[r];

        if(sum >= weight){
            used += (r-l);
            while(l < r){
                sum -= v[l];
                l++;
            }
            cnt++;
        }
        r++;
    }

    if(sum <= weight) {
        used += (n-l);
        cnt++;
    }
    return {cnt,used};
}

int main(){
    int n;cin>>n;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }

    int weight;cin>>weight;

    vector<int> ans = solve(v,n,weight);

    cout<<"no.of groups:" << ans[0]<<endl;
    cout<<"no.of elemet used:" << ans[1]<<endl;


    return 0; 
}