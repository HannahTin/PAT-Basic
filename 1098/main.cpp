#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> top(N);
    vector<int> down(N);
    for(int i=0;i<N;i++) cin >> top[i];
    for(int i=0;i<N;i++) cin >> down[i];
    int min_top = *min_element(top.begin(),top.end());
    int max_down = *max_element(down.begin(),down.end());
    if(min_top> max_down){
        cout <<"Yes "<< min_top-max_down<<endl;
    }else{
        cout << "No "<<max_down-min_top +1<<endl;
    }
    return 0;
}
