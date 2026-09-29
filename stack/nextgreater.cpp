#include<bits/stdc++.h>
using namespace std;

vector<int> nextgreater(vector<int> &arr,int n){
    stack<int> st;
    vector<int> ans(n);

    ans[n-1] = -1;
    st.push(arr[n-1]);

    for(int i = n-2 ; i >= 0 ; i--){
        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }

        if(!st.empty()){
            ans[i] = st.top();
        }
        else {
            ans[i] = -1;
        }

        st.push(arr[i]);
    }

    return ans;
}
int main(){
    int n;cin >> n;
    vector<int> arr(n);

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    vector<int> ans = nextgreater(arr,n);

    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i] <<" ";
    }

    return 0;
}