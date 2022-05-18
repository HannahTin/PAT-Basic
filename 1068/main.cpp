#include <bits/stdc++.h>
using namespace std;
int directions[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,-1},{1,-1},{-1,1}};
int main() {
    int M, N, TOL;
    cin >> M >> N >> TOL;
    vector<pair<int,int>> ans;
    vector<vector<int>> vec(N,vector<int>(M));
    unordered_map<int,int> ump;
    for(int i = 0 ;i<N;i++){
        for(int j =0;j <M;j++){
            cin >> vec[i][j];
            ump[vec[i][j]]++;
        }
    }
    for(int i = 0 ;i<N;i++){
        for(int j =0;j <M;j++){
            int new_i , new_j, cnt = 0, target =8;
            for(auto d:directions) {
                new_i = i+d[0],new_j = j+d[1];
                if(new_i <0 || new_i>=N || new_j<0 ||new_j>=M) {
                    target--;
                    continue;
                }
                if( abs(vec[i][j] - vec[new_i][new_j])  > TOL) cnt++;
            }
            if(cnt ==target && ump[vec[i][j]]==1) ans.push_back({i + 1, j+1});
        }
    }
    int fin = ans.size();
//    cout <<fin<<endl;
    if(fin>1) {
        cout << "Not Unique" << endl;
    }
    else if(fin ==1) cout <<"("<<ans[0].second <<", "<< ans[0].first <<"): " <<vec[ans[0].first-1][ans[0].second-1];
    else cout << "Not Exist"<<endl;

    return 0;
}
