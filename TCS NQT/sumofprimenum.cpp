#include<bits/stdc++.h>
using namespace std;

bool isPrime(int val){
    if(val <= 1) return false;

    for(int i = 2 ; i*i <= val ; i++){
        if(val%i == 0){
            return false;
        }
    }
    
    return true;
}

int main(){
    int n;cin>>n;

    int sum = 0;

    for(int i = 1 ; i <= n ; i++){
        if(isPrime(i)){
            sum += i;
        }
    }

    cout<<sum<<endl;
    
    return 0;
}