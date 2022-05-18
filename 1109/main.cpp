#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<char,vector<vector<char>>> ump;
    for(char i='A';i<='Z';i++){
        vector<vector<char>> pre(7, vector<char>(5));
        for(int j=0;j<7;j++){
            for(int k=0;k<5;k++){
                cin >> pre[j][k];
            }
        }
        ump[i] = pre;
    }
    getchar();
    string target;
    getline(cin,target);
    vector<string> words;
    int i=0;
    while(i<target.size()){
        if(isupper(target[i])){
            string tmp="";
            tmp += target[i];
            i++;
            while(isupper(target[i])){
                tmp += target[i];
                i++;
            }
            words.push_back(tmp);
        }
        i++;
    }
    for(int p=0;p<words.size();p++) {
        if(p!=0) cout <<endl;
        string w = words[p];
        for(int i=0;i<7;i++){
            for(int k=0;k<w.size();k++){
                if(k!=0) cout <<" ";
                for(int j=0;j<5;j++){
                    cout << ump[w[k]][i][j];
                    }
             }
            cout << endl;
        }
    }
    return 0;
}



