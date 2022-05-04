#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

bool check_legal(string s) {
    int pnum = 0, ppos;
    for (int i = 0; i < s.size(); ++i) {
        if ((s[i] < '0' || s[i] > '9') && (s[i] != '.' && s[i] != '-'))
            return false;
        if (s[i] == '-' && i != 0) return false;
        if (s[i] == '.') {
            pnum++;
            if (pnum > 1) return false;
            ppos = i;
        }
    }
    if (pnum > 0 && ppos < s.size() - 3) //s.size()返回的是size_t,即unisgned 类型
        return false;
    if (stod(s) > 1000.0 || stod(s) < -1000.0)
        return false;
    else
        return true;
}

int main() {
    int n, cnt = 0;
    double sum = 0.0;
    string s;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (!check_legal(s))
            cout << "ERROR: " << s << " is not a legal number" << endl;
        else {
            cnt++;
            sum += stod(s);
        }
    }
    if (cnt == 0)
        printf("The average of 0 numbers is Undefined");
    else if (cnt == 1)
        printf("The average of %d number is %.2lf", cnt, sum);
    else
        printf("The average of %d numbers is %.2lf", cnt, sum / cnt);
    return 0;
}