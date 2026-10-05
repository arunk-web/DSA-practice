#include<bits/stdc++.h>
using namespace std;


int digit(int val){
    int sum = 0;

    while(val > 0){
        int last = val%10;

        sum = sum*10 + last;

        val /= 10;
    }

    return sum;
}
int main(){
    int n;cin>>n;

    cout<<digit(n);
}