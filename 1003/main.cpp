#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 只能有一个P一个T，中间末尾和开头可以随便插入A。
// 但是必须满足开头的A的个数 * 中间的A的个数 = 结尾的A的个数，而且P和T中间不能没有A～
int main() {
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        string str;
        cin >> str;
        int cnt_a = 0, cnt_b = 0, cnt_c = 0, cnt_P =0, cnt_T=0;
        bool isP = false, isT = false,isOut = false;
        for(int j = 0;j<str.size();j++){
            if(str[j] != 'A' and  str[j] != 'P' and str[j] != 'T'){
                isOut = true;
                cout<<"NO"<<endl;
                break;
            }else if(str[j] == 'A' and !isP){
                cnt_a++;
            }else if(str[j] == 'P'){
                cnt_P ++;
                isP = true;
            }else if(str[j] == 'A' and isP and !isT){
                cnt_b ++;
            }else if(str[j]=='T'){
                cnt_T ++;
                isT = true;
            }else if(str[j]=='A' and isT){
                cnt_c ++;
            }
        }
        if(cnt_P ==1 and cnt_T == 1 and cnt_b!=0 and  cnt_a*cnt_b == cnt_c) cout<<"YES"<<endl;
        else if(!isOut) cout<<"NO"<<endl;
    }
    return 0;
}
