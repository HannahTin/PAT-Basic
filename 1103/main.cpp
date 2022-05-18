#include <bits/stdc++.h>
using namespace std;
int findB(int gen,int n){
    for(int j =2;j<n;j++){ //j从2开始
        if(j*j + (j-1)*(j-1)==gen){
            return j;
        }
    }
    return -1;
}
int main() {
    int m, n;
    cin >> m >> n;
    bool res = false;
    for(int i=m;i<=n;i++){
        int li_diff = i*i*i - (i-1)*(i-1)*(i-1);
        int gen = sqrt(li_diff);
        if(gen * gen == li_diff){
            int j = findB(gen,n);
            if(j != -1){
                res = true;
                cout <<i<<" "<<j<<endl;
            }
        }
    }
    if(!res) cout <<"No Solution"<<endl;
    return 0;
}
