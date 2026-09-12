#include<bits/stdc++.h>
using namespace std;

string find(string s1,string s2){
    int n = s1.size();
    int m = s2.size();
    string res = "";

    for(int i = 0 ;  i < n ; i++){
        bool found =  false;
        for(int j = 0  ; j < m ; j++){
            if(s2[j] ==  s1[i]){
                found =  true;
                  break ;
            }
        }

        if(!found){
            res  += s1[i];
        }
    }

    return res;
}

int main(){
    // string s1,s2;
    // cin>>s1>>s2;
      string s1 = "abcdef";
       string s2 = "ghobc";

     cout<<find(s1,s2);

    return 0;

}