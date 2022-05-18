#include <bits/stdc++.h>
using namespace std;
int main() {
    char c;
    cin>> c;
    getchar();
    string str;
    getline(cin,str);
    if(c=='C'){
        int cnt = 1;
        for(int i=0;i<str.size();i++){
            if(str[i]!=str[i+1]) {
                if(cnt==1) cout<< str[i];
                else cout<<cnt <<str[i];
                cnt = 1;
            }
            else{
                cnt++;
            }
        }
    }else{
        int i=0,times = 0;
        while(i<str.size()){
            if(isdigit(str[i])){
                times = 10* times +str[i]-'0';
                if(!isdigit(str[i+1])){
                    while(times){
                        cout <<str[i+1];
                        times--;
                    }
                    i+=2;
                }else{
                    i++;
                }
            }else{
                cout <<str[i];
                i++;
            }
        }
    }
    return 0;

}
