#include<bits.stdc++.h>
using namespace std;

vector<vector<int>> sum(vector<int> &v,int n){
    vector<vector<int>> ans;

    for(int i = 0 ; i < n ; i++){
        int mid = i+1;
        int high = n-1;

        while(mid < high){
            int sum = v[i] + v[mid] + v[high];

            if(sum == 0){
                ans.push_back({v[i],v[mid],v[high]});
                mid++;
                high--;
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