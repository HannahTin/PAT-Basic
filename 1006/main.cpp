#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while(cin>>n){
        int b = n/100;
        int s = n/10 % 10;
        int t = n%10;
        string ans;
        string ans_b,ans_s,ans_t;
        ans_b.assign(b,'B');
        ans_s.assign(s,'S');
        for(int i=1;i<=t;i++) ans_t.push_back(i+'0');
        ans += ans_b + ans_s += ans_t ;
        cout<<ans<<endl;
    }
    return 0;
}
