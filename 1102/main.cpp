#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int max_amount = -1, max_num = -1;
    string max_num_id, max_amount_id;
    for(int i=0;i<N;i++){
        string id;
        int price, num;
        cin >> id >> price >> num;
        if(num > max_num) {
            max_num = num;
            max_num_id = id;
        }
        if(price*num > max_amount){
            max_amount = price*num;
            max_amount_id = id;
        }
    }
    cout << max_num_id <<" "<<max_num<<endl;
    cout << max_amount_id <<" "<<max_amount <<endl;
    return 0;
}
