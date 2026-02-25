/*
7-4 判断素数
分数 10
作者 陈越
单位 浙江大学
本题的目标很简单，就是判断一个给定的正整数是否素数。

输入格式：
输入在第一行给出一个正整数N（≤ 10），随后N行，每行给出一个小于2 
31
 的需要判断的正整数。

输出格式：
对每个需要判断的正整数，如果它是素数，则在一行中输出Yes，否则输出No。

输入样例：
2
11
111
输出样例：
Yes
No
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB
栈限制
8192 KB*/
#include <stdio.h>
#include <math.h>
int isPrime(long long int inp){
    if(inp<=0){
        return 0;
    }
    if(inp==2){
        return 1;//一定要把2放在1前面
    }
    if(inp==1 || inp % 2==0){
        return 0;
    }
    /*
    平方根优化，
    我们可以观察一下在36时候的事情
    例如 n=36，因子对有：(1,36)、(2,18)、(3,12)、(4,9)、(6,6)
    结果发现。每个因子对中，总有一个小于等于 √n，另一个大于等于 √n。
    对于 36，√36=6，所有因子对中，较小的那个（1,2,3,4,6）都 ≤6，较大的那个（36,18,12,9,6）都 ≥6。
    如果存在一个大于 √n 的因子 a，那么它对应的因子 b = n/a 一定小于 √n。
    所以只要在 2 到 √n 之间找不到因子，那么大于 √n 的范围也不会有因子。
    */
    long long int target=(long long int)sqrtl((long double)inp);
    for(long long int i=3;i<=target;i+=2){
        if(inp % i==0){
            return 0;
        }
    }
    return 1;
    
}
int main(){
    int time=0;
    long long int input=2147483647;
    
    scanf("%d",&time);
    for(int i=0;i<time;i++){
        scanf("%lld",&input);
        if(isPrime(input)){
            printf("Yes");
        }else{
            printf("No");
        }
        if(i<time-1){
            printf("\n");
        }
        
    }
   //printf("%d",isPrime(input));
   //printf("/n");
   return 0;

}