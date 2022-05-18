#include <bits/stdc++.h>
using namespace std;
int main() {
    int M, N, S;
    cin >> M >> N >> S;
    int counter = 0;
    bool flag = false;
    unordered_set<string> visited;
    for(int i=0;i<M;i++){
        string user;
        cin >> user;
        counter++;
        if(flag) {
            if(visited.count(user)<=0) {
                cout<<user<<endl;
                visited.insert(user);
                flag = false;
                counter = 0;
            }
            continue;
        }
        if(visited.empty() && counter == S){
            cout << user <<endl;
            visited.insert(user);
            counter = 0;
        }
        else if(!visited.empty() && counter == N) {
            if(visited.count(user)) {
                flag = true;
            }else{
                cout << user <<endl;
                visited.insert(user);
                counter = 0;
            }

        }
    }
    if(visited.empty()) cout << "Keep going..." << endl;
    return 0;
}
