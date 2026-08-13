#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> &v,int k){

    reverse(v.begin(),v.begin()+2);
    reverse(v.begin()+2,v.end());

    reverse(v.begin(),v.end());
}
int main(){
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }

    rotate(v,k);

    for(int i = 0 ; i < n ; i++){
        cout<<v[i]<<" ";
    }

    return 0;

}