#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    vector<vector<int>> v(n,vector<int>(m));
    // int arr[n][m];

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>v[i][j];
        }
    }


    int ans = 0;
    int maxi = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        int curr = 0;
        for(int j = 0 ; j < m ; j++){
            if(v[i][j] == 1){
                curr++;
            }
        }

        if(curr > maxi){
            maxi = curr;
            ans = i;
        }
    }
 
    cout<<ans<<endl;

    return 0;
}