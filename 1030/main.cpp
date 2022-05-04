#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, p;
    cin >> N >> p;
    vector<long long> vec(N);
    for(int i = 0; i < N; i++){
        scanf("%ld",&vec[i]);
    }
    sort(vec.begin(), vec.end());
//    int left = 0, right = N - 1;
//    if(vec[left] * p >= vec[right]) {
//        cout << N << endl;
//    }else{
//        int ll = left, ans1 = 0;
//        while(ll <= right){
//            if(vec[ll] * p >= vec[right]){
//                ans1 = right - ll + 1;
//                break;
//            }else{
//                ll ++;
//            }
//        }
//        int rr = right, ans2 = 0;
//        while(left <= rr){
//            if(vec[left] * p >= vec[rr]){
//                ans2 = rr - left + 1;
//                break;
//            }else{
//                rr --;
//            }
//        }
//        cout << max(ans1, ans2) << endl;
//    }
//    return 0;
      int max_ans = 1;
      for(int i = 0;i < N;i++){
          for(int j = i+max_ans;j < N;j++){
              if(vec[i] * p >= vec[j]){
                  max_ans = max(max_ans, j - i + 1);
              }else{
                  break;
              }
          }
      }
      cout << max_ans << endl;
}
//递归方法，测试点4会超时
#include <cstdio>
#include <algorithm>
#define MAXN 100001
using namespace std;
int Max_Per_Array(long a[],int i,int j,long p);
int main()
{
    int n;
    long p;//定义为long型
    scanf("%d%ld",&n,&p);
    long a[MAXN];//定义为long型
    for(int i = 0; i < n; i++){
        scanf("%ld",&a[i]);
    }
    sort(a,a+n);//升序排序
    int max_coun;
    max_coun = Max_Per_Array(a,0,n-1,p);
    printf("%d",max_coun);
    return 0;
}
//返回数组a[]从第i到第j个位置能构成完美数列的最大元素个数
int Max_Per_Array(long a[],int i,int j,long p)
{
    if(a[j] <= p * a[i]){//满足完美数列
        return j-i+1;
    }
    else{//不满足完美数列
        if(a[j - 1] > p * a[i]&&a[j] <= p * a[i + 1]){//最大值前移一位满足而最小值后移一位不满足
            return Max_Per_Array(a,++i,j,p);//直接让最小值后移一位
        }
        else if(a[j - 1] <= p * a[i]&&a[j] > p * a[i + 1]){//最大值前移一位不满足而最小值后移一位满足
            return Max_Per_Array(a,i,--j,p);//直接让最大值前移一位
        }
        else{//最大值前移一位或最小值后移一位都不满足则分别前移和后移
            int ch_min,ch_max;
            ch_min = Max_Per_Array(a,++i,j,p);
            ch_max = Max_Per_Array(a,i,--j,p);
            return ch_min > ch_max ? ch_min : ch_max;//返回最大元素个数
        }
    }
}