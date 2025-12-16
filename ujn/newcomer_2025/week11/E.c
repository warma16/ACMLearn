#include <stdio.h>
#include <stdbool.h>
int main(){
    int size,tmp_size,inp_num;
    scanf("%d %d",&tmp_size,&inp_num);
    size=tmp_size+1;
    bool hasTrees[size];
    for(int i=0;i<size;i++){
        hasTrees[i]=true;
    }
    for(int i=0;i<inp_num;i++){
        int begin,end;
        scanf("%d %d",&begin,&end);
        for(int cursor=begin;cursor<=end;cursor++){
            if(hasTrees[cursor]){
                hasTrees[cursor]=false;
            }
        }
    }
    int counter=0;
    for(int i=0;i<size;i++){
        if(hasTrees[i]){
            counter++;
        }
    }
    printf("%d",counter);

}