#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> vec(N);
    for(int i=0;i<N;i++){
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end());
    double ans = vec[0]; // 从第二根才开始对折
    for(int j = 1;j<N;j++){
        ans = ans/2 +vec[j]/2.0;
    }
    cout << int(ans) <<endl;
    return 0;
}
