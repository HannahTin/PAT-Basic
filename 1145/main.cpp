#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> vec(N);
    for(int i = 0;i < N;i++){
        cin>>vec[i];
    }
    vector<bool> ans(N, true);
    int left_max = 0;
    for(int i =0;i < N;i++){
        if(vec[i]<left_max) ans[i] = false;
        left_max = max(left_max,vec[i]);
    }
    int right_min = INT_MAX,cnt = 0;
    for(int i =N-1;i >= 0;i--){
        if(vec[i]>right_min) ans[i] = false;
        if(ans[i]) cnt++;
        right_min = min(right_min,vec[i]);
    }
    cout << cnt << endl;
    int p = cnt;
    for(int i = 0;i<N && p>=0;i++){
        if( ans[i]) {
            if(p!= cnt) cout<<" ";
            cout<< vec[i];
            p --;
        }
    }
    cout<<endl;
    return 0;
}
