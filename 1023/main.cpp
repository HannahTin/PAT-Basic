#include <bits/stdc++.h>
using namespace std;
int main() {
    string ans;
    for(int i=0;i<10;i++){
        int tmp;
        cin>>tmp;
        for(int j=0;j<tmp;j++){
            ans.push_back(i+'0');
        }
    }
    int i= 0;
    while(ans[i] == '0'){
        i++;
    }
    swap(ans[i],ans[0]);
    cout<<ans<<endl;
    return 0;
}
