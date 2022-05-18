#include <bits/stdc++.h>
using namespace std;
int main() {
    string A,B;
    cin >> A >> B;
    int p1 = A.size()-1 , p2 = B.size()-1, idx = 1;
    string ans;
    while(p1 >= 0 || p2 >= 0){
        if(p1 < 0){
            while(p2>-1){
                ans.push_back(B[p2]);
                p2 --;
            }
            break;
        }else if(p2<0){
            B = '0' + B;
            p2 ++;
        }
        if (idx % 2 == 1) {
            int mod = ((A[p1] - '0') + (B[p2] - '0')) % 13;
            if (mod < 10) ans.push_back(mod + '0');
            else if (mod == 10) ans.push_back('J');
            else if (mod == 11) ans.push_back('Q');
            else if (mod == 12) ans.push_back('K');
        } else {
            int diff = (B[p2] - '0') - (A[p1] - '0');
            if (diff < 0) ans.push_back(diff + 10 + '0');
            else ans.push_back(diff + '0');
        }
        p1--;
        p2--;
        idx++;
    }

    reverse(ans.begin(),ans.end());
    cout << ans << endl;
    return 0;
}
