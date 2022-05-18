#include <bits/stdc++.h>
using namespace std;
int main() {
    int T, K;
    cin >> T >> K;
    int n1, b, t, n2;
    for(int i=0;i<K;i++){
        cin >> n1 >> b >> t >> n2;
        if(T == 0) {
            cout <<"Game Over."<<endl;
            break;
        }
        if(T < t) cout << "Not enough tokens.  Total = " << T <<"."<<endl;
        else{
            if(b == (n2 > n1)) {
                T += t;
                cout << "Win " << t <<"!" << "  Total = "<<T <<"."<<endl;
            }
            else{
                T -= t;
                cout << "Lose " << t <<"." << "  Total = "<<T <<"."<<endl;
            }
        }
    }
    return 0;
}
