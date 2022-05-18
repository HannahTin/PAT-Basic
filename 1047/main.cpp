#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    string str;
    int grade;
    int group[1001] = {0};
    int max_grade = 0;
    int group_id;
    for(int i = 0;i < N;i++){
        cin >> str >> grade;
        auto p = str.find('-');
        int idx = stoi(str.substr(0,p));
        group[idx] += grade;
        if(group[idx] > max_grade){
            max_grade = group[idx];
            group_id = idx;
        }
    }
    cout<< group_id << " " << max_grade<<endl;


}