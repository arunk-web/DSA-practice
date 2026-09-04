#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<string> v = {"flower","sunglasses","sunkissed"};

    string ans = v[0];

    for(int i = 1 ; i < v.size() ; i++){
        string curr = v[i];
        int j =  0;
 
        while(j < min(curr.size(),ans.size()) && ans[j] == curr[j]){
            j++;
        }

        ans = ans.substr(0,j);
        if(ans.size() == 0) break;
    }

    if(ans.size() == 0) cout<<""<<endl;
    else cout<<ans<<endl;

    return 0;
}