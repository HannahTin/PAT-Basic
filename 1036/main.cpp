#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    char c;
    scanf("%d %c",&a,&c);
    int row = round(a/2.0) - 2;
    for(int i = 0; i< a;i++){
        cout<<c;
    }
    cout<<endl;
    for(int i=0;i<row;i++){
        cout<<c;
        for(int j=0;j<a-2;j++) cout<<" ";
        cout<<c << endl;
    }
    for(int i = 0; i< a;i++){
        cout<<c;
    }
    return 0;
}
