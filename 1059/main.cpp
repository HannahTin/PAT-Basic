#include <bits/stdc++.h>
using namespace std;
bool isprime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) {
            return false;
            break;
        }
    }
    return true;
}
int main() {
    int N;
    cin>>N;
    unordered_map<string ,int> ump;
    string id;
    for(int i=0;i<N;i++){
        cin>>id;
        ump[id] = i+1;
    }
    int M;
    cin >> M;
    unordered_set<string> visited;
    for(int i = 0; i<M;i++){
        cin >>id;
        if(ump.find(id)==ump.end()) cout<<id<<": "<<"Are you kidding?"<<endl;
        else{
            if(visited.count(id)==0){
                if(ump[id] == 1) cout<<id<<": "<<"Mystery Award"<<endl;
                else if(isprime(ump[id])) cout << id <<": "<<"Minion"<<endl;
                else{
                    cout << id <<": "<<"Chocolate"<<endl;
                }
                visited.insert(id);
            }else{
                cout << id <<": "<<"Checked"<<endl;
            }
        }
    }
    return 0;
}
