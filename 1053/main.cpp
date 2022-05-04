#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, D;
    double e;
    cin >>  N >> e>>D;
    int pos = 0, yes = 0;
    for(int i = 0;i < N;i++){
        int day; cin >> day;
        vector<double> num(day);
        int cnt = 0;
        for(int j = 0; j < day; j++) {
            cin >> num[j];
            if(num[j] < e) cnt++;
        }
        if(cnt > day /2) {
            pos++;
            if(day > D) {
                yes++;
                pos--;
            }
        }
    }
    cout <<fixed<<setprecision(1);
    double ans1 = pos/(1.0*N) *100;
    double ans2 = yes/(1.0*N)*100;
    cout<<  ans1<<"%" <<" "<<ans2<<"%"<<endl;
    return 0;
}
//3 6 3 11 5
