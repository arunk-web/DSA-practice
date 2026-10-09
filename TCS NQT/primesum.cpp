#include<bits/stdc++.h>
using namespace std;

bool isPrime(int val){
    if(val <= 1)return false;

    for(int i = 2 ; i*i <= val ; i++){
        if(val%i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int n,m;
    cin>>n>>m;

     int cnt = 0;
    int prime = 0;

    for(int i = 1 ; ; i++){
        if(isPrime(i)){
            cnt++;

            if(cnt == n){
                prime = i;
                break;
            }
        }
    }

    int single = prime;
    

    while(single > 9){
        int digitsum = 0;

        while(single > 0){
            digitsum += single%10;
            single /= 10;
        }

        single = digitsum;
    }

    cout<<single*prime<<endl;
}