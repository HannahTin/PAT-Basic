#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, x;
    cin >> n >> k >> x;
    vector<vector<int>> matrix(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> matrix[i][j];
        }
    }
    int cnt = 1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(cnt >k) cnt = 1;
            for(int j = n-1; j>=cnt; j--) matrix[i][j] = matrix[i][j-cnt];
            for(int k=0; k<cnt; k++) matrix[i][k] = x;
            cnt++;
        }
    }
    for(int i=0;i<n;i++){
        int ans = 0;
        for(int j=0;j<n;j++){
            ans += matrix[j][i];
        }
        if(i!=0) cout << " ";
        cout <<ans;
    }
    cout << endl;
    return 0;
}
