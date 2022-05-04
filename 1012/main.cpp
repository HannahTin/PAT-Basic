#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin>>N;
    int a1=0,a2=0,a2_cnt = 0,a3 =0,a4_sum=0,a4_cnt=0,a5=0;
    bool flag = true;
    for(int i=0;i<N;i++){
        int num;
        cin>>num;
        if(num%5==0 and num%2==0){
            a1+=num;
        }else if(num%5==1){
            if(flag) {a2+=num; flag = false;}
            else {a2-=num; flag = true;}
            a2_cnt++;
        }else if(num%5==2){
            a3++;
        }else if(num%5==3){
            a4_sum +=num;
            a4_cnt++;
        }else if(num%5==4){
            a5 = max(a5,num);
        }
    }
    if(a1==0) cout<<"N ";
    else cout<<a1<<" ";
    if(a2_cnt==0) cout<<"N ";
    else cout<<a2<<" ";
    if(a3==0) cout<<"N ";
    else cout<<a3<<" ";
    if(a4_cnt==0) cout<<"N ";
    else cout<< fixed << setprecision(1)<<a4_sum/(1.0*a4_cnt)<<" ";
    if(a5==0) cout<<"N";
    else cout<<a5;

    return 0;
}
