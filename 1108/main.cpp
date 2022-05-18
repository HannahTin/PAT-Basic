#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    int opt[6]={0};
    int n = str.size();
    for(int i=0;i<n;i++){
        if(str[i]=='S') opt[0]++;
        else if(str[i]=='t') opt[1]++;
        else if(str[i]=='r') opt[2]++;
        else if(str[i]=='i') opt[3]++;
        else if(str[i]=='n') opt[4]++;
        else if(str[i]=='g') opt[5]++;
    }
    int j= 0, cnt =0;
    bool used[6] = {false};
    while(cnt!=6){
        if(opt[j%6]!=0){
            if(j%6==0) cout <<"S";
            else if(j%6==1) cout <<"t";
            else if(j%6==2) cout <<"r";
            else if(j%6==3) cout <<"i";
            else if(j%6==4) cout <<"n";
            else if(j%6==5) cout <<"g";
            opt[j%6]--;
        }else{
            if(!used[j%6]) cnt++;
            used[j%6] = true;
        }
        j++;
    }
    return 0;
}