#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int n;
    string star;
    cin>>n>>star;
    int last_star = (n-1)/2;
    int sum = 0, top = 3, layer = 1; //要知道一共有几层 最上面是几
    while(1){
        sum += top;
        if(sum==last_star) break;
        else if(sum>last_star){
            sum -= top;
            top -= 2;
            layer --;
            break;
        }
        top += 2;
        layer ++;
    }
    int last = n - 2 *sum - 1 ; // 3 5
    string ans;
    int above = top , below = 3;
    for(int i=0;i<layer+1;i++){ // 5 3 1
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k =0;k<above;k++){
            cout<<star;
        }
        above -=2;
        cout<<endl;
    }
    for(int i= (top-1)/2-1;i>=0;i--){ // 3 5
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        if(below>top) break;
        for(int k =0;k<below;k++){
            cout<<star;
        }
        below +=2;
        cout<<endl;
    }

    cout << last<<endl;
    return 0;
}