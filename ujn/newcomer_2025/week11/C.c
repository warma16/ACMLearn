#include <stdio.h>
int main(){
    int leg_num;
    int inp_nums;
    scanf("%d",&inp_nums);
    for(int i=0;i<inp_nums;i++){
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
        if(i<inp_nums-1){
            printf("\n");
        }
        
    }
}