// Problem Given an array of integers where every element appears an even number of times except one element which appears an odd number of times, find that odd - occurring element in O(log N) time.Conditions : Equal elements must appear in pairs in the array;
// no more than two consecutive occurrences of any element are allowed.Example of INVALID input(3 consecutive 2s) : 7 → 1 1 2 2 2 3 3 Example of VALID input : 5 → 2 2 3 1 1 → Answer : 3

//     Constraints 1 <= N
//     <= 10 * *5(N is always odd)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sol(vector<int> &v , int n){

    sort(v.begin(),v.end());

    for(int i = 0 ; i < n ; i++){
        int cnt = 0;
        int curr = v[i];
        while(i < n && curr == v[i]){
            cnt++;
            i++;
        }
        if(cnt%2 == 1){
            return curr;    
        }
    }

    return -1;
}

    int main(){
    vector<int> v = {2,2,3,1,1};
    int n  = v.size();

    int ans = sol(v,v.size());
    cout<<ans<<endl;

    return 0;
}
