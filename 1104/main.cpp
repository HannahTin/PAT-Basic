#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    if(num <= 1) return false;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) return false;
    }
    return true;
}
int digitSum(int num){
    int ans = 0;
    while(num){
        ans  += num%10;
        num /= 10;
    }
    return ans;
}
bool cmp(pair<int,int>& a,pair<int,int>& b){
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}
int main() {
    int N;
    cin >> N;
    for(int i = 0;i < N;i++){
        int K, m;
        cin >> K >> m;
        bool isfind = false;
        vector<pair<int,int>> ans;
        cout <<"Case "<<i+1<<endl;
        // 一开始我写的是k从K位最小数开始到K+1位结束 会运行超时
        // 正确解法是k从K位且以99位结尾的数开始，到K+1位的最小数。
        // 因为相邻自然数的最大公约数是1，比如gcd（37，38），要让m和n不相邻，只能通过进位得到
        // 而gcd（n+8，n）= gcd（n，8）8的公因子1，2，4，8都不符合
//        gcd（n+17，n）满足
//参见https://icode.best/i/54610345945864
        for(int k= pow(10,K)/10+99;k< pow(10,K);k+=100){
            if(digitSum(k)==m){
                int n = digitSum(k+1);
                if(gcd(m,n)>2 && isPrime(gcd(m,n))){
                    isfind = true;
                    ans.push_back({n,k});
                }
            }
        }
        if(isfind){
            sort(ans.begin(),ans.end(),cmp);
            for(auto a:ans){
                cout <<a.first <<" "<<a.second<<endl;
            }
        }
        else {
            cout <<"No Solution"<<endl;
        }
    }
    return 0;
}
