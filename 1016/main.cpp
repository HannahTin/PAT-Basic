#include <bits/stdc++.h>
using namespace std;
int main() {
    string a,b;
    char da,db;
    cin>>a>>da>>b>>db;
    string aa,bb;
    for(int i=0;i<a.size();i++){
        if(a[i]==da) aa.push_back(da);
    }
    for(int i=0;i<b.size();i++){
        if(b[i]==db) bb.push_back(db);
    }
    if(!aa.empty() && !bb.empty())
        cout<<stoi(aa)+stoi(bb)<<endl;
    else cout<<0<<endl;

    return 0;
}
