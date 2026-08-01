
// Problem A factory produces N chocolate packets. Empty (defective) packets are represented as 0. Push all empty packets (0s) to the end of the array while maintaining the relative order of non-zero (filled) packets. Input: First line = N (number of packets). Second line = N space-separated integers.

// Constraints 1 <= N <= 10**5


#include<bits/stdc++.h>

using namespace std;



void sol(vector<int> &v , int n){
    int j = -1;

    for(int i = 0 ; i < n ; i++){
        if(v[i] == 0){
            j = i;
            break;
        }
    }

    if(j == -1) return;


    for(int i = j+1 ; i < n ; i++){
        if(v[i] != 0){
            swap(v[i],v[j]);
            j++;
        }
    }
    
}



int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sol(v, v.size());

    cout<<endl;
    
    for(int i = 0 ; i < n ; i++){
        cout<<v[i]<<" "<<endl;
    }

    return 0;
}