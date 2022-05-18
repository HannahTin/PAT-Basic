#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    if(num<=1) return false; // 这里要注意
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) return false;
    }
    return true;
}
int isSexPrime(int num){
    if(isPrime(num)){
        if(isPrime(num-6))
            return num-6;
        else if(isPrime(num+6))
            return num+6;
    }
    return -1;
}
int main() {
    int N;
    cin >> N;
    int ans = isSexPrime(N);
    if(ans == -1){
        cout << "No" <<endl;
        int i = N+1;
        while(isSexPrime(i) == -1){
            i++;
        }
        cout << i<<endl;

    }else{
        cout <<"Yes"<<endl;
        cout << ans<<endl;
    }
    return 0;
}
