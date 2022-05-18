#include <bits/stdc++.h>
using namespace std;
int main() {
    string A, B;
    int D;
    cin >> A >> D;
    int n = A.size();
    B += A.substr(n-D,D);
    B += A.substr(0,n-D);
    double a = stod(A), b = stod(B);
    cout << fixed << setprecision(2);
    cout << b/a <<endl;

    return 0;
}
