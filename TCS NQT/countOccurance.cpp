#include<bits/stdc++.h>
using namespace std;
// Count Occurrences of an Element in a Sorted Array


int lastOccur(vector<int> &v,int n,int target){
    int left = 0;
    int right = n-1;
    int last = -1;

    while(left <= right){
        int mid = (left + right)/2;

        if(v[mid] == target){
            last = mid;
            left = mid+1;
        }
        else if(v[mid] < target){
            left = mid+1;
        }
        else {
            right = mid-1;
        }
    }
    return last;
}

int firstOccur(vector<int> &v,int n,int target){
    int left = 0;
    int right = n-1;
    int first = -1;

    while(left <= right){
        int mid = (left + right)/2;

        if(v[mid] == target){
            first = mid;
            right = mid-1;
        }
        else if(v[mid] < target){
            left = mid+1;
        }
        else {
            right = mid-1;
        }
    }
    return first;
}

int main(){
    int n;cin>>n;
    int target;cin>>target;

    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }



    int first = firstOccur(v,n,target);
    int last = lastOccur(v,n,target);

    cout<< last-first+1 <<endl;

}