#include <bits/stdc++.h>
using namespace std;
int main() {
    int a1,b1 ,a2,b2,k;
    scanf("%d/%d %d/%d %d",&a1,&b1,&a2,&b2,&k);
    int total = lcm(lcm(b1 , b2 ),k) ;
    a1 = total/b1 * a1 ;
    a2 = total/b2 * a2;
    int small,big;
    if(a1>a2) {
        small = a2;
        big = a1;
    }
    else{
        small = a1;
        big = a2;
    }
    bool flag = true;
    for(int i= small+1 ; i<big;i++){
        auto tmp = gcd(i,total);
        if(k*tmp==total){
            if(flag) {
                cout<< i/tmp<<"/" <<k;
                flag = false;
            }
            else cout<<" "<< i/tmp <<"/"<<k;
        }
    }
    cout <<endl;

    return 0;
}
