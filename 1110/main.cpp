#include <bits/stdc++.h>
using namespace std;
int main() {
    int startAddress, N, K, temp, cnt = 0;
    cin >> startAddress >> N >> K;
    int data[100005], next[100005];
    for(int i=0;i<N;i++){
        cin>>temp;
        cin >> data[temp] >> next[temp];
    }
    vector<int> ans, tmp;
    while(startAddress != -1){
        cnt ++;
        tmp.push_back(startAddress);
        if(cnt % K==0){
            ans.insert(ans.begin(),tmp.begin(),tmp.end());
            tmp.clear();
        }
        startAddress = next[startAddress];
    }
    // 一开始我是在while循环里把不足k个的加进去，（cnt==N），但输入有可能输入不在链表中的节点，所以不能用N判断。
    if(!tmp.empty()) ans.insert(ans.begin(),tmp.begin(),tmp.end());
    int n = ans.size();
    if(n == 1){ //注意只有一个节点时的输出格式
        printf("%05d %d -1\n",ans[0],data[ans[0]]);
    }else{
        for(int i= 0;i < n -1 ;i++){
            if(i ==0) printf("%05d %d",ans[i], data[ans[i]]);
            else printf(" %05d\n%05d %d", ans[i],ans[i],data[ans[i]]);
        }
        printf(" %05d\n%05d %d -1\n",ans[n-1],ans[n-1],data[ans[n-1]]);
    }

    return 0;
}
