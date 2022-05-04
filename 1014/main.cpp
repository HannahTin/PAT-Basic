#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<char,string> week={
            {'A',"MON"},
            {'B',"TUE"},
            {'C',"WED"},
            {'D',"THU"},
            {'E',"FRI"},
            {'F',"SAT"},
            {'G',"SUN"}
    };
    string line1,line2,line3,line4;
    getline(cin,line1);
    getline(cin,line2);
    getline(cin,line3);
    getline(cin,line4);
    int n1= line1.size(),n2=line2.size(),n3 = line3.size(),n4=line4.size();
    bool flag = true;
    for(int i=0;i<n1&&i<n2;i++){
        if(line1[i]==line2[i]){
           if(flag and line1[i]>='A' and line1[i]<='G'){
               cout<< week[line1[i]]<<" ";
               flag = false;
           }else if(!flag and line1[i]>='A' and line1[i]<='N'){
               cout<< line1[i]-'A'+10<<":";
               break;
           }else if(!flag and isdigit(line1[i])){
               cout<<"0"<<line1[i]-'0'<<":";
               break;
           }
        }
    }
    for(int i=0;i<n3&&i<n4;i++){
        if(line3[i]==line4[i] and isalpha(line3[i])){
            if(i<=9) cout<<"0"<<i<<endl;
            else cout<<i<<endl;
            break;
        }
    }

    return 0;
}
