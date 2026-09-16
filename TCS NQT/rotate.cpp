#include<bits/stdc++.h>
using namespace std;

void rotatebyk(vector<int> &v,int k){

    reverse(v.begin(),v.begin()+k+1);
    reverse(v.begin()+k+1,v.end());

    reverse(v.begin(),v.end());
}
int main(){
    int n;cin>>n;
    int k;cin>>k;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }

    rotatebyk(v,k);

    for(int i = 0 ; i < n ; i++){
        cout<<v[i]<<" ";
    }

}