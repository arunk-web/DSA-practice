#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n <= 1) return false;

    for(int i = 2 ; i*i <= n ; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int findnthPrime(int n){
    int cnt = 0;

    for(int i = 1 ; ; i++){
        if(isPrime(i)){
            cnt++;

            if(cnt == n) return i;
        }
    }
    return -1;
}
int main(){
    int n1,n2; cin>>n1>>n2;

    int first = findnthPrime(n1);
    int second = findnthPrime(n2);

    cout<<first*second-1<<endl;


    return 0;
}