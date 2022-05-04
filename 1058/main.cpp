#include <bits/stdc++.h>
using namespace std;
struct question{
    int grade , choice, correct;
    vector<char> ans;
};

int main() {
    int N, M;
    cin >> N >> M;
    vector<question> ques(M);
    for(int i = 0;i <M;i++){
        cin >> ques[i].grade >> ques[i].choice >> ques[i].correct;
        int K = ques[i].correct;
        vector<char> tmp(K);
        for(int j = 0; j<K;j++ ) cin>>tmp[j];
        ques[i].ans = tmp;
    }
    getchar();
    string line;
    vector<int> wrong(100);
    for(int i = 0;i<N;i++){
        getline(cin,line);
        int j =0,total_grade=0,que_idx=0; //该学生的得分
        vector<char> curr;
        while(j<line.size()){
            // 读取该学生的每个答案
            if(line[j]=='('){
                j++;
                while(line[j]!=')'){
                    if(!isdigit(line[j]) && line[j]!=' ')
                        curr.push_back(line[j]);
                    j++;
                }
                if(curr == ques[que_idx].ans) total_grade += ques[que_idx].grade;
                else wrong[que_idx]++;
                que_idx ++;
                curr.clear();
            }
            j++;
        }
        cout<<total_grade<<endl;

    }

    int max = *max_element(wrong.begin(),wrong.end());
    if( max == 0){
        cout << "Too simple";
    }else{
        cout <<max;
        for(int i=0;i<M;i++){
            if(wrong[i] == max)
                cout<<" " <<i+1;
        }
    }
    cout<<endl;
    return 0;
}
