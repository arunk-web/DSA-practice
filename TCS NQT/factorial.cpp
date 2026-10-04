#include<bits/stdc++.h>
using namespace std;

int findsolution(int val){
    
    int sol = 1;
    for(int i = 1 ; i <= val ; i++){
        sol = sol*i;
    }

    return sol;
}
int main(){
    int n;cin>>n;

    cout<<findsolution(n);

}