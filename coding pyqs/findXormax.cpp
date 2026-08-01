#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> &v, int n){
    int res = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        reverse(v.begin(),v.begin()+i+1);
        reverse(v.begin()+i+1,v.end());


    int ans = v[0];

    for(int i = 0 ; i < n-1 ; i++){
        ans = ans + ans^v[i+1];
    }

    res = max(ans,res);
}

return res;

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

    int res = findMax(v,v.size());
    cout<<res;

    return 0;
}