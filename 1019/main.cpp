#include <bits/stdc++.h>
using namespace std;
int main() {
    string num;
    cin >> num;
    num = string(4-num.size(),'0')+num; //前面补0
    while(1){
        string num1 = num;
        string num2 = num;
        sort(num1.begin(), num1.end(), greater<char>());
        sort(num2.begin(), num2.end(), less<char>());
        num = to_string(stoi(num1) - stoi(num2));
        num = string(4-num.size(),'0')+num;
        cout << num1 << " - " << num2 << " = " << num <<endl;
        if(num == "6174" || num == "0000") break;
    }
    return 0;
}
