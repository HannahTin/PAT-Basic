#include <bits/stdc++.h>
using namespace std;
int main() {
    int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char M[11] =  {'1', '0', 'X', '9', '8', '7','6', '5', '4', '3' ,'2'};
    int N;
    cin>>N;
    int cnt = 0;
    for(int i = 0;i < N;i++){
        string card;
        cin >> card;
        bool noDigit = false;
        int sum = 0;
        for(int j = 0;j < 17;j++){
            if(card[j] <'0' || card[j] > '9'){
                noDigit = true;
                break;
            }
            sum += weight[j] * (card[j]-'0');
        }
        if(noDigit) {
            cnt++;
            cout << card << endl;
        }
        else{
            int Z = sum % 11;
            if(card[17] != M[Z]) {
                cnt++;
                cout << card << endl;
            }
        }
    }
    if(cnt == 0) cout << "All passed";
    return 0;
}
