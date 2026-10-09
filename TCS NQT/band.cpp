#include<bits/stdc++.h>
using namespace std;

char solve(vector<int> &v, int n,map<char,int> &mpp){
    char ans = 'G';
    int currmax = -1;

    for(int i = 0 ; i < n ; i++){
        if(v[i] >= 90 && v[i] <= 100) mpp['A']++;
        else if(v[i] >= 80 && v[i] <= 89) mpp['B']++;
        else if(v[i] >= 70 && v[i] <= 79) mpp['C']++;
        else if(v[i] >= 60 && v[i] <= 69) mpp['D']++;
        else if(v[i] >= 50 && v[i] <= 59) mpp['E']++;
        else mpp['F']++;
    }

    for(auto n : mpp){
        char c = n.first;
        int freq = n.second;

        if(freq > currmax){
            currmax = freq;
            ans = c;
        }
    }

    return ans;
}
int main(){
    int n;cin>>n;
    vector<int> v(n);
    map<char,int> mpp;

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }


    char result = solve(v,n,mpp);

    if(result == 'G'){
        cout<<'X'<<endl;
    }
    else {
        cout<<result<<endl;
    }

    return 0;
}