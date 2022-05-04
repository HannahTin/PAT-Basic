#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin>>N;
    double ans = -1;
    for(int i = 0; i <N;i++){
        int real, xu;
        cin >>real >>xu;
        double tmp = sqrt(real*real +xu*xu);
        ans = max(ans,tmp);
    }
    cout<<fixed<<setprecision(2);
    cout<<ans<<endl;
    return 0;
}
