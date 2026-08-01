// Problem Before the outbreak of coronavirus, a meeting took place in Wuhan. A person who attended had COVID-19 and everyone shook hands with everyone else exactly once. Given N people in the room, find the total number of handshakes. Input: First line = T (test cases). Each following line = N (number of people).

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        long long n ; cin>> n;

        cout<<n*(n-1)/2 << endl;
    }

    

    return 0;
}