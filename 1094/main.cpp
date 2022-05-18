#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) return false;
    }
    return true;
}
int main() {
    int L, K;
    cin >> L >> K;
    string str, tmp;
    cin >> str;
    bool flag = false;
    for(int i=0;i<=L-K;i++){ // 之前我写的是i<=str.size()-K, 测试点4无法通过，因为str.size（）返回的unsigned_int
                             // 比如unsigned_int 5- int 6本来得到负数，那么无符号结果第一位是1（表示负号）会得到很大的数。
        tmp = str.substr(i,K);
        if(stoi(tmp) >1 and isPrime(stoi(tmp))){
            cout << tmp << endl;
            flag = true;
            break;
        }
    }
    if(!flag) cout << "404"<<endl;
    return 0;
}
