#include<bits/stdc++.h>
using namespace std;

int findsum(int val){


    if(val < 10) return val;

    int curr = 0;
    
    while(val > 9){

        curr = 0;
        while(val > 0){
            curr += val%10;
            val /= 10;
        }

        val = curr;
    }

    return curr;
}
int main(){
    int n; cin>>n;

    cout<<findsum(n)<<endl;

    return 0;
}