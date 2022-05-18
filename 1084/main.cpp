using namespace std;
#include <bits/stdc++.h>
int main(){
    char d;
    int N;
    cin>> d>>N;
    string str;
    str.push_back(d);
    for(int i=1;i<N;i++){
        string ans;
        int cnt = 1, j=0;
        while(j < str.size()){ // 找连续相同子串
            if(str[j]!=str[j+1]){
                ans.push_back(str[j]);
                ans.push_back(cnt+'0');
                cnt = 1;
            }else{
                cnt++;
            }
            j++;
        }
        str = ans;
    }
    cout << str << endl;
}