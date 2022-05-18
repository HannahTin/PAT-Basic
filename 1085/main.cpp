#include <bits/stdc++.h>
using namespace std;
// 对字符串的大小写转换用transform函数
//对哈希表的value排序
struct school{
    string name;
    int number = 0;
    double grade = 0;
};
bool cmp(school& a, school& b){
    if(int(a.grade) == int(b.grade)) {
        if(a.number==b.number) return a.name <b.name;
        else return a.number <b.number;
    }
    else return int(a.grade) > int(b.grade);
}
int main() {
    int N;
    cin >> N;
    unordered_map<string,school> ump;
    for(int i=0;i<N;i++){
        string id, sc;
        double grade;
        cin >> id >> grade >>sc;
        transform(sc.begin(), sc.end(), sc.begin(), ::tolower);
        ump[sc].name = sc;
        ump[sc].number++;
        if(id[0] == 'T')
            grade *= 1.5;
        else if(id[0]=='B')
            grade /= 1.5;
        ump[sc].grade += grade;
    }
    vector<school> vec;
    for(auto p = ump.begin();p!=ump.end();p++){
        vec.push_back(p->second);
    }
    sort(vec.begin(),vec.end(),cmp);
    int i = 1, curr_grade = int(vec[0].grade);
    cout<<vec.size()<<endl;
    for(int j = 0;j<vec.size();j++){
        if(int(vec[j].grade) != curr_grade) {
            i = j+1;
            curr_grade = int(vec[j].grade);
        }
        cout << i <<" "<< vec[j].name<<" "<<int(vec[j].grade) <<" "<<vec[j].number<<endl;
    }
    return 0;
}
