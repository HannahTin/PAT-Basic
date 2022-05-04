#include <bits/stdc++.h>
using namespace std;
int main() {
    long long A,B;
    int D;
    cin>> A>> B>> D;
    long long C = A+B;
    string ans;
    while(1){
        ans += to_string(C%D);
        C = C/D;
        if(C==0) break; //考虑C一开始等于0的情况
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
}
