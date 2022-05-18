#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M, ans = 0;
    cin >> N;
    unordered_set<string> pal;
    for(int i=0;i<N;i++){
        string id;
        cin >> id;
        pal.insert(id);
    }
    cin >> M;
    string max_pal, max_come;
    for(int i=0;i<M;i++){
        string come;
        cin>> come;
        if(pal.find(come)!=pal.end()){
            ans++;
            if(max_pal.empty() || come.substr(6,8) < max_pal.substr(6,8)) max_pal = come;
        }else{
            if(max_come.empty() || come.substr(6,8) < max_come.substr(6,8)) max_come = come;
        }
    }
    cout <<ans <<endl;
    if(ans!=0){
        cout << max_pal <<endl;
    }else{
        cout << max_come<<endl;
    }

    return 0;
}
