#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int mp[26]={0};
    int max_cnt = 0;
    char ans;
    for(int i = 0;i < str.size(); i++){
        if(isalpha(str[i])){
            char t = tolower(str[i]);
            mp[t-'a']++;
            if(mp[t-'a']> max_cnt){
                max_cnt = mp[t-'a'];
                ans = t;
            }else if(mp[t-'a']== max_cnt){
                if(ans>t) ans = t;
            }
        }
    }
    cout<< ans <<" "<<max_cnt<<endl;

}