#include <bits/stdc++.h>
using namespace std;
int main() {
    int M, N, A,B,K;
    string ans;
    cin >> M >> N >> A >>B >> K;
    vector<vector<int>> pic(M,vector<int>(N));
    for(int i = 0;i < M;i++){
        for(int j = 0; j < N;j++){
            scanf("%d",&pic[i][j]); // cin 改成scanf读入就对了
            if(pic[i][j] >= A && pic[i][j] <= B) pic[i][j] = K;
            ans = to_string(pic[i][j]);
            while(ans.size()<3) ans = '0'+ans;
            if(j ==0) cout << ans;
            else cout  <<" " << ans;
        }
        cout <<endl;
    }

    return 0;
}
