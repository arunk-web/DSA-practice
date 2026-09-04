#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin>>n;
    vector<int> arr(n);

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    int temp = 0;
    set<int> s;

    for(int i = 0 ; i < n ; i++){
        if(s.find(arr[i]) == s.end()){
            arr[temp++] = arr[i];
            s.insert(arr[i]);
        }
    }

    for(int i = 0 ; i < temp ; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}