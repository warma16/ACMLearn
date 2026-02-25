/*
L1-2 日期格式化
分数 5
作者 陈越
单位 浙江大学
世界上不同国家有不同的写日期的习惯。比如美国人习惯写成“月-日-年”，而中国人习惯写成“年-月-日”。下面请你写个程序，自动把读入的美国格式的日期改写成中国习惯的日期。

输入格式：
输入在一行中按照“mm-dd-yyyy”的格式给出月、日、年。题目保证给出的日期是1900年元旦至今合法的日期。
m m - d d - y y y y
0 1 2 3 4 5 6 7 8 9
输出格式：
在一行中按照“yyyy-mm-dd”的格式给出年、月、日。

输入样例：
03-15-2017
输出样例：
2017-03-15
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
    char inp[10];
    scanf("%s",&inp);
    printf("%c",inp[6]);
    printf("%c",inp[7]);
    printf("%c",inp[8]);
    printf("%c",inp[9]);
    printf("-");
    printf("%c",inp[0]);
    printf("%c",inp[1]);
    printf("-");
    printf("%c",inp[3]);
    printf("%c",inp[4]);


    return 0;
}