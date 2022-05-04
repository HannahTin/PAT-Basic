#include <bits/stdc++.h>
using namespace std;
int main() {
    string broken,orig;
    getline(cin,broken);
    getline(cin,orig);
    set<char> ump;
    bool isUpper = true;
    for(auto b:broken){
        if( b == '+') {
            isUpper = false;
        }
        else if(isalpha(b)){
            ump.insert(tolower(b));
        }
        ump.insert(b);
    }
    string ans;
    for(auto o:orig){
        if(ump.find(o)!=ump.end()){
            continue;
        }
        if(isupper(o) and !isUpper){
            continue;
        }
        ans.push_back(o);
    }
    cout<< ans <<endl;
    return 0;
}