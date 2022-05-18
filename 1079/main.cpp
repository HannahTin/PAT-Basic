#include <bits/stdc++.h>
using namespace std;
//字符串相加和判断字符串是回文串
bool isPalindromic(string str){
    int left = 0, right = str.size()-1;
    while(left<right){
        if(str[left]!=str[right]) return false;
        left ++;
        right --;
    }
    return true;
}
string getSum(string& a, string& b){
    int pa = a.size()-1, pb = b.size()-1, sum, carry = 0;
    string ans;
    while(pa>=0 || pb>=0){
        if(pa==-1){
            b  = '0' +b;
            pb++;
        }
        if(pb ==-1){
            a = '0'+ a;
            pa++;
        }
        sum = a[pa]-'0' + b[pb] - '0' +carry;
        ans.push_back(sum%10 + '0');
        carry = sum /10;
        pa--;
        pb--;
    }
    if(carry) ans.push_back(carry+'0');
    reverse(ans.begin(),ans.end());
    return ans;
}
int main() {
    string str_a, str_b, sum;
    cin >>  str_a;
    int cnt = 0;
    bool flag;
    while( cnt <10){
        flag = isPalindromic(str_a);
        if(flag){
            cout << str_a << " is a palindromic number."<<endl;
            break;
        }else{
            str_b = str_a;
            reverse(str_a.begin(), str_a.end());
            sum = getSum(str_b ,str_a);
            cout << str_b <<" + "<<str_a <<" = "<<sum<<endl;
            str_a = sum;
            cnt ++;
        }
    }
    if(!flag) cout <<"Not found in 10 iterations."<<endl;
    return 0;
}
