
#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;

    char dig;cin>>dig;
    int j = -1;

    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == dig){
            j = i;
            if(i < s.size() && s[i] < s[i+1]){
                break;
            }
        }
    }

    // j = i; ab har match par update hota hai — 
    // isliye agar koi "better" occurrence (jaha s[i] < s[i+1]) 
    // na mile, to j automatically last occurrence ban jaata hai.

    string ans = "";

    for(int i = 0 ; i < j ; i++){
        ans += s[i];
    }

    for(int i = j+1 ; i < s.size() ; i++){
        ans += s[i];
    }

    cout<<ans<<endl;
}