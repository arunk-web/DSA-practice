#include <bits/stdc++.h>
using namespace std;

// int sol(vector<int> &v, int n) {

    
// }

int main()
{
    int n,m,p,k,j;
    cin >> n>>m>>p>>k>>j;

    //m total banana
    //p total peanuts
    //k banana eaten by single monkey
     //j peanut eaten by single monkey
    
    // vector<int> v(n);

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    // int ans = sol(v, v.size());
    // cout << "ans is : " << ans << endl;

    int cnt = 0;
    while(m > 0 || p > 0){
        if(m >= k){
            m -= k;
            cnt++;
        }
        else if(p >= j){
            p -= j;
            cnt++;
        }
        else {
            int total = m+p;
            int req = j + k;
            if(total > 0)cnt++;
        }
    }


    cout<<(n-cnt)<<endl;

    return 0;
}