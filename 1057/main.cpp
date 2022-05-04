#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    int ans = 0, cnt_1 = 0,cnt_0=0;
    for(auto s:str){
        if(isalpha(s)) ans += tolower(s)-'a'+1;
    }
    while (ans){
        if(ans%2 == 1) cnt_1++;
        else cnt_0 ++;
        ans /= 2;
    }
    cout <<cnt_0 <<" "<<cnt_1<<endl;
    return 0;
}
