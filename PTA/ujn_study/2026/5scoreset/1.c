/*
7-4 计算指数
分数 5
作者 陈越
单位 浙江大学
真的没骗你，这道才是简单题 —— 对任意给定的不超过10的正整数n，要求你输出2 
n
 。不难吧？

输入格式：
输入在一行中给出一个不超过10的正整数n。

输出格式：
在一行中按照格式 2^n = 计算结果 输出2 
n
 的值。

输入样例：
5
输出样例：
2^5 = 32
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
#include <math.h>

int main(){
    double n;
    scanf("%lf",&n);
    double res=pow((double)2,n);
    printf("2^%d = %d\n",(int)n,(int)res);
    return 0;
    
}