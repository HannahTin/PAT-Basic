using namespace std;
#include<bits/stdc++.h>
int main(){
    int M;
    cin >> M;
    for(int i=0;i<M;i++){
        int num;
        cin >> num;
        bool found = false;
        for(int j=1;j<10;j++){
            int ans = num * num *j;
            if(ans%1000 == num || ans%100 == num || ans %10 ==num){
                cout << j << " "<<ans <<endl;
                found = true;
                break;
            }
        }
        if(!found) cout <<"No"<<endl;

    }

}