/*
7-5 计算阶乘和
分数 10
作者 陈越
单位 浙江大学
对于给定的正整数N，需要你计算 S=1!+2!+3!+...+N!。

输入格式：
输入在一行中给出一个不超过10的正整数N。

输出格式：
在一行中输出S的值。

输入样例：
3
输出样例：
9
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB
栈限制
8192 KB
*/
#include <stdio.h>
int main(){
    int n;
    long long int S=0;
    long long int buffer;
    scanf("%d",&n);
    for(int j=n;j>=1;j--){
        buffer=1;
        for(int i=j;i>=1;i--){
            buffer *= i;
        }
        S+=buffer;
        //printf("%lld\n",buffer);
    }
    printf("%lld",S);
    return 0;
}