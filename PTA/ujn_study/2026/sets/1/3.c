/*
7-3 A-B
分数 20
作者 陈越
单位 浙江大学
本题要求你计算A−B。不过麻烦的是，A和B都是字符串 —— 即从字符串A中把字符串B所包含的字符全删掉，剩下的字符组成的就是字符串A−B。

输入格式：
输入在2行中先后给出字符串A和B。两字符串的长度都不超过10^4
 ，并且保证每个字符串都是由可见的ASCII码和空白字符组成，最后以换行符结束。

输出格式：
在一行中打印出A−B的结果字符串。

输入样例：
I love GPLT!  It's a fun game!
aeiou
输出样例：
I lv GPLT!  It's  fn gm!
代码长度限制
16 KB
时间限制
150 ms
内存限制
64 MB
栈限制
8192 KB
C (gcc)


*/

#include <stdio.h>
#include <string.h>
int main(){
    char inp[10005],target[10005];//由后边的fgets的截断的特性去确定数组要有5个字符的冗余。
    //scanf("%s\n",&inp);
    //scanf("%s",&target);
    //应该用fgets去实现
    fgets(inp,10005,stdin);
    fgets(target,10005,stdin);

    int inp_len=strlen(inp);
    int target_len=strlen(target);
    int wont_be_printed[128]={0};//同理，是0-127 应为128个数字
    for(int i=0;i<target_len;i++){
        wont_be_printed[(int)target[i]]=1;//新学一招：下标不仅可以用数值去。用字符串acsii码也能替代数值效果。
    }
    for(int i=0;i<inp_len;i++){
        if(wont_be_printed[(int)inp[i]]){
            continue;
        }
        printf("%c",inp[i]);
    }
    return 0;
    //不能用'\0'标记，那样会让编译器认为字符串已经结束，而不是空字符串
}