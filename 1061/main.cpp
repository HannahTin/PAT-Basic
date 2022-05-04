#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    int grade[M], correct[M];
    for(int i= 0;i<M;i++) cin>>grade[i];
    for(int i= 0;i<M;i++) cin>>correct[i];
    for(int i = 0;i<N;i++){
        int ans = 0,tmp;
        for(int j=0;j<M;j++){
            cin>>tmp;
            if(tmp == correct[j]) ans+= grade[j];
        }
        cout<<ans<<endl;
    }


    return 0;
}
