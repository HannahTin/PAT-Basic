#include <bits/stdc++.h>
using namespace std;
int main() {
    string orig,curr;
    cin >> orig >>curr;
    set<char> dic;
    for(auto c:curr){
        dic.insert(c);
    }
    string ans;
    unordered_map<char,bool> ump;
    for(auto o:orig){
        if(dic.find(o)==dic.end()) {
            if(isalpha(o) ){
                char upper_o = toupper(o);
                if(!ump[upper_o]){
                    ump[upper_o] = true;
                    ans.push_back(upper_o);
                }
            }else{
                if(!ump[o]){
                    ump[o] = true;
                    ans.push_back(o);
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
