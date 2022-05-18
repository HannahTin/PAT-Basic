#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b;
    getline(cin,a);
    getline(cin,b);
    unordered_set<char> uset;
    string ans;
    for(int i=0;i<a.size();i++){
        if(uset.empty() || uset.find(a[i])==uset.end()) {
            uset.insert(a[i]);
            ans.push_back(a[i]);
        }
    }
    for(int j=0;j<b.size();j++){
        if(uset.empty() || uset.find(b[j])==uset.end()) {
            uset.insert(b[j]);
            ans.push_back(b[j]);
        }
    }
    cout << ans<<endl;
    return 0;
}
