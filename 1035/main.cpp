#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> orig(n);
    for(int i=0;i<n;i++)
        scanf("%d",&orig[i]);
    vector<int> judg(n);
    for(int i=0;i<n;i++)
        scanf("%d",&judg[i]);

    int i, j; // 排序断点
    for( i = 1;i < n;i++){
        if(judg[i] < judg[i-1]){
            break;
        }
    }
    for(j = i;j<n;j++){
        if(orig[j] != judg[j]){
            break;
        }
    }
    if(j==n){
        cout << "Insertion Sort" << endl;
        sort(orig.begin(), orig.begin() + i + 1);
    }else{
        cout << "Merge Sort" << endl;
        int k = 1, flag = 1;
        while(flag) {
            flag = 0;
            for (i = 0; i < n; i++) {
                if (orig[i] != judg[i])
                    flag = 1;
            }
            k = k * 2;
            for (i = 0; i < n / k; i++)
                sort(orig.begin() + i * k, orig.begin() + (i + 1) * k);
            sort(orig.begin() + n / k * k, orig.begin() + n);
        }
    }
    for(int p=0;p<n;p++){
        if(p!=0) cout<<" ";
        cout<<orig[p];
    }
    cout<<endl;
    return 0;
}
