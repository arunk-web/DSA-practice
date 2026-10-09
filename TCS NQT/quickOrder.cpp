#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &v,int n,int t){
    int first = -1;
    int last = -1;
    int len = INT_MIN;

    int curr = 0;
    bool isupdate = false;

    for(int i = 0 ; i < n ; i++){

        if(v[i] <= t){
            if(!isupdate) {
                first = v[i];
                isupdate = true;
            }
            curr++;
        }
        else {
            len = max(len,curr);
            last = i-1;
            isupdate = false; 
            curr = 0;
        }
    }
}
int main(){
    int n;cin>>n;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }

    int t;cin>>t;

    




    return 0;
}