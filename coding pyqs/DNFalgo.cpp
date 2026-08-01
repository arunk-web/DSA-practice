#include <bits/stdc++.h>
using namespace std;

void applydnf(vector<int> &v , int n){
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid <= high){
        if(v[mid] == 0){
            swap(v[mid],v[low]);
            low++;
            mid++;
        }
        else if(v[mid] == 1){
            mid++;
        }
        else {
            swap(v[high],v[mid]);
            high--;
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

    applydnf(v,n);

    for(auto c : v){
        cout<<c<<" ";
    }

    return 0;
}