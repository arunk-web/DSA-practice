#include<bits/stdc++.h>
using namespace std;



int sol(vector<int> &v , int n){
    
    int lar = v[0];
    int sec = -1;

    for(int i = 1 ; i < n ; i++){
        if(v[i] > lar){
            sec = lar;
            lar = v[i];
        }
        else if(v[i] < lar && sec < v[i]){
            sec = v[i];
        }
    }

    return lar;
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

    int ans = sol(v, v.size());

    cout<<ans << endl;
    
    // for(int i = 0 ; i < n ; i++){
    //     cout<<v[i]<<" "<<endl;
    // }

    return 0;
}