/*
7-2 I Love GPLT
分数 5
作者 陈越
单位 浙江大学
这道超级简单的题目没有任何输入。

你只需要把这句很重要的话 —— I Love GPLT ——竖着输出就可以了。

所谓“竖着输出”，是指每个字符占一行（包括空格），即每行只能有1个字符和回车。*/

#include <stdio.h>
#include <string.h>
int main(){
    char* words="I Love GPLT";
    int len=strlen(words);
    for(int i=0;i<len;i++){
        printf("%c",words[i]);
        if(i<len-1){
            printf("\n");
        }
    }
    return 0;
}