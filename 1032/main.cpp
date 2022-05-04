#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    unordered_map<int,int> ump;
    int max_id, max_grade = -1;
    for(int i = 0;i < N;i++){
        int id, grade;
        cin >> id >> grade;
        if(ump.find(id) != ump.end()){
            ump[id] += grade;
        }else{
            ump[id] = grade;
        }
        if(ump[id] > max_grade){
            max_grade = ump[id];
            max_id = id;
        }
    }
    cout << max_id << " " << max_grade<<endl;
    return 0;
}
