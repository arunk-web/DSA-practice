#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sum(vector<int> &v,int n){
    vector<vector<int>> ans;
    sort(v.begin(),v.end());

    for(int i = 0 ; i < n ; i++){
        if(i > 0 && v[i] == v[i-1]) continue;
        int j = i+1;
        int k = n-1;

        while(j < k){
            int sum = v[i] + v[j] + v[k];

            if(sum > 0){
                k--;

            }else if(sum < 0){
                j++;
            }
            
            else {
                ans.push_back({v[i],v[j],v[k]});
                while(j < k && v[j] == v[j+1]) j++; 
                // j++;
                while(j < k && v[k] == v[k-1]) k--; 
                j++;
                k--;
            }
        }
    }

    return ans;
}
int main(){
    int n;cin>>n;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }


}