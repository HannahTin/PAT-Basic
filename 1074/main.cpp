#include <bits/stdc++.h>
using namespace std;
//字符串加法
int main() {
    string chart, a, b;
    cin >> chart >> a >> b;
    int pa = a.size()-1, pb = b.size()-1,pc = chart.size()-1;
    vector<int> ans;
    int sum, carry = 0, jinzhi;
    while(pa>=0 || pb>=0){
        if(pa ==-1){
            a = '0'+a;
            pa++;
        }
        if(pb ==-1){
            b = '0'+b;
            pb++;
        }
       sum =  (a[pa]-'0')+(b[pb]-'0') +carry;
        if(chart[pc]=='0') jinzhi = 10;
        else jinzhi = chart[pc]-'0';
       ans.push_back(sum %jinzhi);
       carry = sum/jinzhi;
       pa--;
       pb--;
       pc--;
    }
    if(carry) ans.push_back(carry);
    bool flag = false;
    for(int i= ans.size()-1;i>=0;i--){
        if(!flag && ans[i]!=0) {
            flag = true;
        }
        if(!flag && ans[i]==0) continue; //找第一个非0
        cout << ans[i];
    }
    if(!flag) cout<<0<<endl; //0
    return 0;
}
