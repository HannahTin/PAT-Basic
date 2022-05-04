#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int a = 0, b = 0;
    int record[4];
    for(int i = 0;i < N;i++){
        cin>>record[0]>>record[1]>>record[2]>>record[3];
        int target = record[0]+record[2];
        if(record[1] == target && record[3] == target ) continue;
        else if(record[1] != target && record[3] != target) continue;
        else if(record[1] == target) b++;
        else if(record[3] == target) a++;
    }
    cout << a << " " << b <<endl;
    return 0;
}
