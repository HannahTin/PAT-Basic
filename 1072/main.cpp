#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    set<string> object;
    for(int i=0;i<M;i++) {
        string tmp;
        cin >> tmp;
        object.insert(tmp);
    }
    int person = 0, res = 0;
    for(int j =0;j<N;j++){
        string name;
        int cnt;
        cin >> name >>cnt;
        vector<string> ans;
        int every_res = 0;
        for(int k=0;k<cnt;k++){
            string own;
            cin>>own;
            if(object.find(own)!=object.end()) {
                ans.push_back(own);
                every_res ++;
            }
        }
        if(every_res){
            cout << name <<":";
            for(auto a:ans){
                cout << " "<<a;
            }
            cout <<endl;
            person++;
            res += every_res;
        }
    }
    cout << person << " " << res <<endl;

    return 0;
}
