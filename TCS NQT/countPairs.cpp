#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;cin>>n;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }

    int x,y; cin>>x>>y;

    int cnt = 0;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            string s1 = to_string(v[i]) + to_string(v[j]);
            int curr1 = stoi(s1);

            if(curr1 >= x && curr1 <= y){
                cnt++;
            }

            string s2 = to_string(v[j]) + to_string(v[i]);
            int curr2 = stoi(s2);

            if(curr2 >= x && curr2 <= y){
                cnt++;
            }
        }
    }

    cout<<"the ans is:" <<cnt<<endl;


    return 0;
}