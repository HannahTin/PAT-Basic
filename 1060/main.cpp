#include <bits/stdc++.h>
using namespace std;

int main() {
   int N;
   cin >> N;
   vector<int> miles(N);
   for(int i=0;i<N;i++){
       cin >>miles[i];
   }
    sort(miles.begin(),miles.end(),greater<>());
    int res = 0;
    for (int i = 0; i < N; i++) {
        if (miles[i] > i + 1) {
            res = i + 1;
        }
    }
    cout << res;
}
