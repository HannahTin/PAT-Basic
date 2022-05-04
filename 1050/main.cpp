#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, m, n;
    cin >>  N;
    vector<int> vec(N);
    for(int i = 0;i < N; i++){
        cin >> vec[i];
    }
    for(int i=sqrt(N);i>=1;i--){
        if(N%i ==0) {
            n=i;
            break;
        }
    }
    m = N / n;
    cout<<m << " "<<n<<endl;
    sort(vec.begin(),vec.end(),greater<int>());
    vector<vector<int>> ans(m,vector<int>(n));
    int up = 0, bottom = m-1,left = 0,right = n-1, idx = 0;
    while(idx < N){
        for(int i = left ; i<=right ;i++){
            ans[up][i] = vec[idx++];
        }
        up++;
        if(idx >= N) break;
        for(int i = up;i<= bottom;i++){
            ans[i][right] = vec[idx++];
        }
        right--;
        if(idx >= N) break;
        for(int i = right;i>=left;i--){
            ans[bottom][i] = vec[idx++];
        }
        bottom --;
        if(idx >= N) break;
        for(int i = bottom ;i>=up;i--){
            ans[i][left] = vec[idx++];
        }
        left++;
        if(idx >= N) break;
    }
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cout<<ans[i][j] <<(j==n-1?"":" ");
        }
        cout <<endl;
    }

    return 0;
}
