#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin>> N >> M;
    unordered_map<string,vector<string>> ump;
    for(int i=0;i<N;i++){
        string idx, idy;
        cin >> idx >> idy;
        ump[idx].push_back(idy);
        ump[idy].push_back(idx);
    }
    for(int j=0;j<M;j++){
        int cnt;
        cin>> cnt;
        unordered_set<string> tmp;
        bool flag = true;
        tmp.clear();
        for(int k=0;k<cnt;k++){
            string idz;
            cin >> idz;
            if(ump.find(idz)==ump.end()) continue;
            if(flag){
                if(!tmp.empty() && tmp.find(idz)!=tmp.end()){
                    cout<<"No"<<endl;
                    flag =false;
                }
                for(int p=0;p<ump[idz].size();p++){
                    tmp.insert(ump[idz][p]);
                }
            }
        }
        if(flag) cout << "Yes"<<endl;
    }
    return 0;
}
