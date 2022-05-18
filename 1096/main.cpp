// 1 2 3 6 9 
// 1 
// 1 2 4 5 8 10 20 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int K, num;
    cin >> K;
    for(int i=0;i<K;i++){
        cin >> num;
        vector<int> yue;
        yue.push_back(1);
        yue.push_back(num);
        for(int i=2;i<=sqrt(num);i++){
            if(num%i == 0){
                yue.push_back(i);
                if(num/i!=i) yue.push_back(num/i); // 这里一开始没注意 比如25 会有两个5
            }
        }
        int n = yue.size();
        if(n<4) cout <<"No"<<endl;
        else{
            bool isFound = false;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    for(int k = j+1;k<n;k++){
                        for(int p=k+1;p<n;p++){
                            if(( yue[i]+yue[j]+yue[k]+yue[p] )% num ==0){
                                isFound = true;
                                break;
                            }
                        }
                    }
                }
            }
            if(isFound)cout << "Yes"<<endl;
            else  cout <<"No"<<endl;
        }

    }
}