// Merge Two Sorted Arrays Without Extra Space
#include <bits/stdc++.h>
using namespace std; 

void reverseString(string &s){
    int i = 0;
    int j = s.size()-1;

    while(i < j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    string s;
    cin >> s;

    reverseString(s);

    cout<<s<<endl;

    return 0;
}