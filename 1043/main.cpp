#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>> str;
    unordered_map<char,int> map;
    for(auto s:str){
        if(s =='P' || s=='A' || s=='T' || s=='e'||s=='s'||s=='t')
            map[s] ++;
    }
    while (map['P'] > 0 || map['A'] > 0 || map['T'] > 0 || map['e'] > 0 || map['s'] > 0 || map['t'] > 0) {
        if (map['P']-- > 0) cout << 'P';
        if (map['A']-- > 0) cout << 'A';
        if (map['T']-- > 0) cout << 'T';
        if (map['e']-- > 0) cout << 'e';
        if (map['s']-- > 0) cout << 's';
        if (map['t']-- > 0) cout << 't';
    }
    cout<<endl;
    return 0;
}
