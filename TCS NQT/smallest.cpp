#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }


    int small = arr[0];

    for(int i = 1 ;  i < n ; i++){
        if(arr[i] < small){
            small = arr[i];
        }
    }

    cout<<small<<endl;
}