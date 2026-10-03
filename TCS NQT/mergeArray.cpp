// Merge Two Sorted Arrays Without Extra Space
#include <bits/stdc++.h>
using namespace std; 

void merge(vector<int> &v1, vector<int> &v2,int n){
    int i = 0;
    int j = v2.size()-1;

    while(i < n && j >= 0){
        if(v1[i] > v2[j]){
            swap(v1[i++],v2[j--]);
        }
        else {
            i++;
            j--;
        }
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
}

int main()
{
    int n;
    cin >> n;

    vector<int> v1(n);
    vector<int> v2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }


    merge(v1,v2,n);

    for (int i = 0; i < n; i++)
    {
        cout<<v1[i]<<" ";
    }

    cout<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<v2[i]<<" ";
    }


    return 0;
}