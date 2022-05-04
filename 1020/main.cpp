#include <bits/stdc++.h>
using namespace std;
struct mooncake{
    double num,price,unit;
};
bool cmp(mooncake& m1, mooncake& m2){
    return m1.unit > m2.unit;
}
int main() {
    int N,D;
    cin>>N>>D;
    vector<mooncake> a(N);
    for(int i=0;i<N;i++){
        scanf("%lf", &a[i].num);
    }
    for(int i=0;i<N;i++){
        scanf("%lf", &a[i].price);
        a[i].unit = a[i].price / a[i].num;
    }
    sort(a.begin(),a.end(),cmp);
    double ans = 0.0;
    for(int i=0;i<N;i++){
        if(a[i].num <=D){
            ans += a[i].price;
            D -= a[i].num;
        }else{
            ans += a[i].unit * D;
            break;
        }
    }
    cout<<fixed<<setprecision(2)<<ans<<endl;
    return 0;
}
