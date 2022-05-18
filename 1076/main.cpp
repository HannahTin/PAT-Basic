#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    getchar();
    for(int i=0;i<N;i++){
        char cho,ans;
        for(int j=0;j<4;j++){
            scanf("%c-%c",&cho,&ans);
            if(ans=='T') cout << cho-'A'+1;
            getchar();
        }
    }
    cout << endl;
    return 0;
}
