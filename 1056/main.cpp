#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,ans=0;
    cin >> N;
    vector<int> num(N);
    for(int i=0;i<N;i++){
        cin>> num[i];
    }
    for(int i=0;i<num.size();i++){
        for(int j=0;j<num.size();j++){
            if(i==j) continue;
            ans += num[i]*10+num[j];
        }
    }
    cout << ans <<endl;

    return 0;
}
