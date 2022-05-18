#include <bits/stdc++.h>
using namespace std;
int main() {
    string password, curr;
    int cnt;
    cin >> password >> cnt;
    getchar();
    getline(cin,curr);
    while(curr != "#" ){
        if( curr != password) {
            cnt --;
            if(cnt <=0) {
                cout << "Wrong password: " << curr << endl;
                cout << "Account locked";
                break;
            }
            else cout << "Wrong password: " << curr << endl;
        }
        else{
            if(cnt == 0)  {
                cout << "Account locked";
                break;
            }
            else{
                cout << "Welcome in" ;
                break;
            }
        }
        getline(cin,curr);
    }
    return 0;
}
