#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    for(int i=2;i*i<=num;i++){
        if(num%i==0) return false;
    }
    return true;
}
int main() {
    int M,N;
    while(cin>>M>>N){
        int cnt = 0,k=0;
        for(int i=2;cnt<N;i++){
            if(isPrime(i)){
                cnt++;
                if(cnt>=M) {
                    k++;
                    if (k % 10 == 1) cout << i;
                    else if (k % 10 == 0) cout << " " << i << endl;
                    else cout << " " << i;
                }
            }
        }
        if(k%10) cout<<endl;
    }
    return 0;
}
