#include<bits/stdc++.h>
using namespace std;

int main(){
    string boys;
    string choco;
    cin>>boys>>choco;


    int n = boys.size();
    int m = choco.size();

    int j = 0;
    int ans = 0;

    for(int i = 0 ; i < n ; i++){
        int req = boys[i]-'0';
        bool IsSatisfy = false;

        while(choco[j] == 'R') j++;

            while(j < m && req > 0 && choco[j] == 'G'){
                req--;
                j++;
                if(req == 0){
                    IsSatisfy = true;
                    break;
                }
            }

            if(IsSatisfy) ans++;
            else break;
    }

    cout<<ans;
}