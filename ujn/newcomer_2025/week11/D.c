#include <stdio.h>
int main(){
    int leg_num;
    scanf("%d",&leg_num);
    if(leg_num%2!=0){
        printf("0 0");
    }else{
        int less=leg_num/4;
        if(leg_num%4!=0){
            less=less+1;
        }
        printf("%d %d",less,leg_num/2);
    }
}