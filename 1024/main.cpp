#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    if(str[0] == '-') cout << "-";
    int i = 0;
    while(str[i]!='E') i++;
    string num = str.substr(1,i-1);
    int exp = stoi(str.substr(i+1));
    if(exp<0){
        cout << "0.";
        for(int j = 0; j < abs(exp) - 1; j++) cout << "0";
        for(int j = 0; j < num.size(); j++){
            if(num[j] != '.') cout << num[j];
        }
    }else{
        cout << num[0];
        int j,k;
        for(j = 2, k = 0; j < num.size() && k < exp; j++, k++){
            cout << num[j];
        }
        if(j == num.size()){
            for(int cnt = 0; cnt < exp - k; cnt++) cout << '0';
        }else{
            cout << ".";
            for(int cnt = j; cnt < num.size(); cnt++ ) cout << num[cnt];
        }

    }

}
