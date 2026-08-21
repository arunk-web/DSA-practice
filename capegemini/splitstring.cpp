
// You have write a function that accepts, a string which length is “len”, the string has some “#”, in it you have to move all the hashes to the front of the string and return the whole string back and print it.

// char* moveHash(char str[],int n);

// Example :

// Sample Test Case

// Input:

// Move#Hash#to#Front
// Output:
// ###MoveHashtoFront

//traverse from the last and push into the string cnt the sign and push it last and reverse it at the end 

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    int n = str.size();
    string v;
    int cnt = 0;

    for(int i = n-1 ; i >= 0 ; i--){
        if(str[i] != '#'){
            v += str[i];
        }
        else {
            cnt++;
        }
    }

    while(cnt > 0){
        v += '#';
        cnt--;
    }

    reverse(v.begin(),v.end());
    cout<<v;
}