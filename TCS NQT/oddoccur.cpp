// // Problem Given an array of integers where 
// every element appears an even number of times 
// except one element which appears an odd number of times, 
// find that odd - occurring element in O(log N) time.Conditions : 
// Equal elements must appear in pairs in the array;
// // no more than two consecutive occurrences of any 
// element are allowed.Example of INVALID input(3 consecutive 2s) 
// : 7 → 1 1 2 2 2 3 3 Example of VALID input : 5 → 2 2 3 1 1 → 
// Answer : 3

//     Constraints 1 <= N
//     <= 10 * *5(N is always odd)

#include <bits/stdc++.h>
using namespace std;

int sol(vector<int> &v, int n)
{ // o(n)
    unordered_map<int, int> mpp;

    for (auto a : v)
    {
        mpp[a]++;
    }

    for (auto val : mpp)
    {
        if (val.second % 2 == 1)
        {
            return val.first;
        }
    }
    return -1;
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
    cout << "ans is : " << ans << endl;

    return 0;
}
