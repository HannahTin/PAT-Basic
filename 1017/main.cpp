#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    int n;
    cin>>str>>n;
    int reminder,tmp,len=str.size();
    tmp = (str[0]-'0')/n;
    if(len==1 || (len>1&&tmp!=0)){
        cout<<tmp;
    } // 1/7 和 15/8
    reminder = (str[0]-'0')%n;
    for(int i=1;i<len;i++){
        tmp = (reminder*10+str[i]-'0')/n;
        cout<<tmp;
        reminder = (reminder*10+str[i]-'0')%n;
    }
    cout<<" "<<reminder<<endl;
    return 0;
}
