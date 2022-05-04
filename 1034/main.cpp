#include <bits/stdc++.h>
using namespace std;

// 化简分数
string simp(long long m, long long n){

}
int main() {
    long long a1, a2, b1, b2;
    scanf("%ld/%ld %ld/%ld", &a1,&b1,&a2,&b2);
    string a = simp(a1,b1), b = simp(a2, b2);
    cout<< a << " + " << b << " = " << simp( a1*b2+a2*b1,b1*b2) << endl;
    cout<< a << " - " << b << " = " << simp(a1*b2-a2*b1, b1*b2) << endl;
    cout<< a << " * " << b << " = " << simp(a1*a2,b1*b2) << endl;
    cout<< a << " / " << b << " = " << simp(a1*b2, a2*b1) << endl;
    return 0;
}
