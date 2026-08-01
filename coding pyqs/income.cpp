// Problem Write a program that continuously takes user input: - Income (amount earned) - Type of Material (category of expenditure) - Expenditure on that Material (amount spent) The input continues until the user enters "done". Then display: 1. Total income 2. Total savings (Income - Total Expenditure) 3. List of where money was spent with respective amounts

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int totalIncome;
    cin >> totalIncome;
    cin.ignore();

    vector<pair<string,int>> expense;

    int cost = 0;

    while(true){
        string s;
        getline(cin, s);

        if(s == "done") break;

        int val;
        cin>> val;
        cin.ignore();

        expense.push_back({s,val});

        cost += val;
    }

    int saving = totalIncome-cost;


    cout<<"Total Income: "<<totalIncome<<endl;
    cout<<"Total Savings: "<<saving<<endl;

    for(auto v : expense){
        cout<<v.first<<": "<<v.second<<endl;
    }

    return 0;
}