#include <bits/stdc++.h>
using namespace std;
#define CLK_TCK 100
using ll = long long;
int main() {
    int C1,C2;
    cin>>C1>>C2;
    int diff = round((1.0 * (C2-C1) )/ CLK_TCK);
    int s = diff % 60;
    int m = diff/60 % 60;
    int h = diff / 3600;
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}
