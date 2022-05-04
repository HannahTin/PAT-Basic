#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<double> vec(N);
    vector<long long> tmp(N);
    for(int i= 1; i<=N;i++){
        cin>>vec[i-1];
        tmp[i-1] =(long long) (vec[i-1] *  1000 * i);
    }
    for(int i = 2; i<=N;i++){
        tmp[i-1] += tmp[i-2] ;
    }
    long long ans = 0.0;
    for(auto t:tmp) ans+=t;
    cout <<fixed << setprecision(2)<< 1.0 * ans / 1000;
    return 0;
}
