#include <bits/stdc++.h>
using namespace std;
int main() {
    string str,tmp;
    while(getline(cin,str)){
        vector<string> vec;
        stringstream ss(str);
        while(getline(ss,tmp,' ')){
            vec.push_back(tmp);
        }
        reverse(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
            cout<<vec[i];
            if(i==vec.size()-1) cout<<endl;
            else cout<<" ";
        }


    }
    return 0;
}
