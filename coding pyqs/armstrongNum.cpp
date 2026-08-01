
#include<bits/stdc++.h>
using namespace std;

int countdig(int val){
    int cnt = 0;

    while(val > 0){
        // int rem = val%10;
        cnt++;
        val /= 10;
    }

    return cnt;
}

int main()
{
    int n;
    cin >> n;

   int num = countdig(n);
   int sum = 0;
   int dig = n;

   while(dig > 0){
    int last = dig%10;
    
    int curr = 1;
    for(int i = 1 ; i <= num ; i++){
        curr = curr*last;
    }


    dig /= 10;
    sum += curr;
   }

   if(sum == n) cout<<"true"<<endl;
   else cout<<"false"<<endl;

    return 0;
}