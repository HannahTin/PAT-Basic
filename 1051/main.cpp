#include <bits/stdc++.h>
using namespace std;
int main() {
    double r1,p1,r2,p2;
    cin >> r1 >> p1 >> r2 >> p2;
    double a1 = r1 * cos(p1);
    double b1 = r1 * sin(p1);
    double a2 = r2 * cos(p2);
    double b2 = r2 * sin(p2);
    double A = a1 * a2 - b1 *b2;
    double B = b1*a2 + a1*b2;
//    当A或者B小于0但是大于-0.005(比如-0.00001)时候，
//    如果按照A>=0的判断，会输出“-0.00”这样的结果,事实上应该输出“0.00”【B同理，应该输出“+0.00i”】
    if (A + 0.005 >= 0 && A < 0)
        printf("0.00");
    else
        printf("%.2f", A);
    if(B >= 0)
        printf("+%.2fi", B);
    else if (B + 0.005 >= 0 && B < 0)
        printf("+0.00i");
    else
        printf("%.2fi", B);
    return 0;
}
