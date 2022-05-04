#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin>>N;
//    C 代表“锤子”、J 代表“剪刀”、B 代表“布”
    unordered_map<char,char> rule={
            {'C','B'},
            {'J','C'},
            {'B','J'}
    };
    int win_a=0,equal_a_b=0;
    char ges_a,ges_b;
    int ges_a_c=0,ges_a_j=0,ges_a_b=0;
    int max_ges_a = 0;
    int ges_b_c=0,ges_b_j=0,ges_b_b=0;
    int max_ges_b = 0;
    for(int i=0;i<N;i++){
        cin >> ges_a >> ges_b;
        if(ges_a == ges_b)
            equal_a_b ++;
        else if(ges_b != rule[ges_a]){
            win_a++;
            if(ges_a == 'C') ges_a_c ++;
            else if(ges_a == 'B') ges_a_b ++;
            else if(ges_a == 'J') ges_a_j ++;
            max_ges_a = max({ges_a_b,ges_a_c,ges_a_j});
        }else{
            if(ges_b == 'C') ges_b_c ++;
            else if(ges_b == 'B') ges_b_b ++;
            else if(ges_b == 'J') ges_b_j ++;
            max_ges_b = max({ges_b_b,ges_b_c,ges_b_j});
        }
    }
    cout << win_a << " " << equal_a_b <<" "<<N-win_a-equal_a_b<<endl;
    cout<< N-win_a-equal_a_b << " "<< equal_a_b <<" "<< win_a<<endl;
    if(ges_a_b == max_ges_a) cout<<'B'<<" ";
    else if(ges_a_c == max_ges_a) cout<<'C'<<" ";
    else if(ges_a_j == max_ges_a) cout<<'J'<<" ";

    if(ges_b_b == max_ges_b) cout<<'B'<<endl;
    else if(ges_b_c == max_ges_b) cout<<'C'<<endl;
    else if(ges_b_j == max_ges_b) cout<<'J'<<endl;

    return 0;
}
