#include <stdio.h>
char* clear(char* strs,int size){
    for(int i=0;i<size;i++){
        strs[i]="";
    }
    return strs;
}
char* back2step(char*)
char* gn(int size){
    char sts[size];
    for(int i=0;i<size;i++){
        sts[i]="";
    }
    return sts;
}
int main(){
    int inpnum=0;
    scanf("%d",&inpnum);
    for(int i=0;i<inpnum;i++){
        int size=0;
        scanf("%d",&size);
        char string=gn(size);
        int possible_num=2;
        //Additionally ,we considered only E and F  is 2
        
        //just E ,F
        //Because we know ,a block can have 2 choice
        possible_num+=size*2;

        //and we must consider o...

        //just E O
        //E->O or E->E but O->E only.

        //E begin
        char cur='E';
        char next_options=['O','E'];
        while


    }
}