// Problem Given a string, count and display: -
//  Number of vowels (a,e,i,o,u — case insensitive) -
//   Number of consonants - Number of spaces - 
//   Number of special characters

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    int vowel = 0 , cons = 0 , space = 0 , special = 0;
    
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || 
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            vowel++;
        }
        else if(isalpha(s[i])){
            cons++;
        }
        else if(isdigit(s[i])){
            special++;
        }
        else if(isspace(s[i])){
            space++;

        }
        else {
            special++;
        }


    }

    cout<<"Vowels: "<<vowel<<endl;
    cout<<"Cons: "<<cons<<endl;
    cout<<"spaces: "<<space<<endl;
    cout<<"special: "<<special<<endl;
}








// isalpha(ch)	Sirf letter hai kya (a-z, A-Z)
// isdigit(ch)	Sirf digit hai kya (0-9)
// isalnum(ch)	Letter YA digit hai kya
// isspace(ch)	Space/tab/newline hai kya
// isupper(ch)	Capital letter hai kya
// islower(ch)	Small letter hai kya