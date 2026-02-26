/*
7-2 大笨钟
分数 10
作者 陈越
单位 浙江大学
微博上有个自称“大笨钟V”的家伙，每天敲钟催促码农们爱惜身体早点睡觉。
不过由于笨钟自己作息也不是很规律，所以敲钟并不定时。
一般敲钟的点数是根据敲钟时间而定的，
如果正好在某个整点敲，那么“当”数就等于那个整点数；
如果过了整点，就敲下一个整点数。
另外，虽然一天有24小时，钟却是只在后半天敲1~12下。
例如在23:00敲钟，就是“当当当当当当当当当当当”，
而到了23:01就会是“当当当当当当当当当当当当”。
在午夜00:00到中午12:00期间（端点时间包括在内），笨钟是不敲的。

下面就请你写个程序，根据当前时间替大笨钟敲钟。

输入格式：
输入第一行按照hh:mm的格式给出当前时间。
其中hh是小时，在00到23之间；mm是分钟，在00到59之间。

输出格式：
根据当前时间替大笨钟敲钟，即在一行中输出相应数量个Dang。
如果不是敲钟期，则输出：

Only hh:mm.  Too early to Dang.
其中hh:mm是输入的时间。

输入样例1：
19:05
输出样例1：
DangDangDangDangDangDangDangDang
输入样例2：
07:05
输出样例2：
Only 07:05.  Too early to Dang.
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB
栈限制
8192 KB
*/
/*
先分析一下这个，
例如在23:00敲钟就是 当当当当，当当当当，当当当”， 敲了11下，23-12=11
而到了23:01就会是   当当当当，当当当当，当当当当”。 当如果不是00 时候 自动在23-12基础上加一
所以也能验证中午十二点不敲钟
*/

#include <stdio.h>

typedef struct DangRes{
    int canDang;
    int numOfDang;
} DangRes;

DangRes judgeDang(int h,int m){
    DangRes dang={0,0};
    /*if(0<=h && h<12){
        return dang;
    }
    if(h==12&&m==0){
        return dang;
    }*/
   //简化逻辑，如果比12小，就可以覆盖到0-12了。然后12那块做个当m==0时候的判断
   if(h<12 || (h==12&&m==0)){
    return dang;
   }
    dang.canDang=1;
    int dang_n=h-12+(int)(m!=0);
    dang.numOfDang=dang_n;
    return dang;
    
}

int parser(int a,int b){
    return (a)*10+(b);
}

int main(){
    int h_,m_;
    int m[2];
    scanf("%d:%d",&h_,&m_);
    DangRes res=judgeDang(h_,m_);
    if(res.canDang){
        for(int i=0;i<res.numOfDang;i++){
            printf("Dang");
        }
        return 0;
    }
    //printf("Only %s:%s.  Too early to Dang.",h,m);
    printf("Only ");
    if(h_<10){
        printf("0");
    }
    printf("%d",h_);
    printf(":");
    if(m_<10){
        printf("0");
    }
    printf("%d",m_);
    printf(".  Too early to Dang.");
    return 0;

}