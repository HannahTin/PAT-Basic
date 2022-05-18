#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> word(N+1);
    for(int i=1;i<=N;i++) cin >> word[i];
    for(int i=1;i<=N;i++){
        for(int j = i+1;j<=N;j++){ // 假设i和j是狼人
            vector<int> truth(N+1,1),lie;
            truth[i] = -1,truth[j]=-1;
            for(int k=1;k<=N;k++){ // 遍历找到谁在说谎
                if(truth[abs(word[k])] * word[k]<0) lie.push_back(k);
            }
            if (lie.size() == 2 && truth[lie[0]] + truth[lie[1]] == 0) {
                cout << i << " " << j;
                return 0;
            }
        }
    }
    cout << "No Solution";
    return 0;
}
