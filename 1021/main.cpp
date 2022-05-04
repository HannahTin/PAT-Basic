#include <bits/stdc++.h>
using namespace std;
int main() {
    string num;
    cin>>num;
    map<char,int> mp;
    for(int i=0;i<num.size();i++){
        mp[num[i]] ++;
    }
    for(auto m:mp){
        cout<< m.first<<":"<<m.second<<endl;
    }
    return 0;
}
