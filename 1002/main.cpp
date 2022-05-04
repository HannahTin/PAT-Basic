#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<char, string> ump = {
            {'1',"yi"},
            {'2',"er"},
            {'3',"san"},
            {'4',"si"},
            {'5',"wu"},
            {'6',"liu"},
            {'7',"qi"},
            {'8',"ba"},
            {'9',"jiu"},
            {'0',"ling"}
    };
    string line;
    while(getline(cin,line)){
        int sum = 0;
        for(int i = 0; i < line.size(); i++){
            sum += line[i] - '0';
        }
        string ans = to_string(sum);
        for(int i = 0; i < ans.size();i++){
            cout << ump[ans[i]];
            if (i != ans.size() - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
