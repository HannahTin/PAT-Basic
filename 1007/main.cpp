#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    for(int i=2;i*i<=num;i++){
        if(num%i==0) return false;
    }
    return true;
}
int main() {
    int N;
    while(cin>>N){
        int cnt =0;
        for(int i=3;i<=N-2;i++){
            if(isPrime(i) && isPrime(i+2)){
                cnt++;
//                cout<< i <<" "<<i+2<<endl;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
