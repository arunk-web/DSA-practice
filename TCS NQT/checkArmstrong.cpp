#include<bits/stdc++.h>
using namespace std;

bool findsolution(int val){
    int original = val;
    int temp = val;

    int digit = 0;
    while(val > 0){
        val /= 10;
        digit++;
    }

    int sum = 0;

    while(original > 0){
        int last = original%10;

        int curr = 1;   
        for(int i = 0 ; i < digit ;i++){
            curr = curr*last;

        }

        sum += curr;
        original /= 10;
    }

    return temp == sum;
}
int main(){
    int n;cin>>n;

    cout<<findsolution(n);

}












