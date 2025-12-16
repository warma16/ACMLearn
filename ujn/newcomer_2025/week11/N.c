#include <stdio.h>
int main(){
    int inp_nums=0;
    char Capitals[26]={
        'A','B','C','D','E','F','G',
        'H','I','J','K','L','M','N',
        'O','P','Q',
        'R','S','T',
        'U','V','W',
        'X','Y','Z'
    };
    char letters[26]={
        'a','b','c','d','e','f','g',
        'h','i','j','k','l','m','n',
        'o','p','q',
        'r','s','t',
        'u','v','w',
        'x','y','z'
    };
    char nums[10]={
        '0','1','2','3','4',
        '5','6','7','8','9'
    };
    char symbols[7]={'~','!','@','#','$','%','^'};
    scanf("%d",&inp_nums);
    for(int i=0;i<inp_nums;i++){
        char input[50];
        scanf("%s",input);
        int num=0;
        int hit_factors[5]={0,0,0,0,0};
        int ok_flag[5]={1,1,1,1,1};
        for(int j=0;j<50;j++){
            int has_checked=0;
            //printf("%d\n",(int)input[j]);
            if((int)input[j]!=0){
                num++;
            }else{
                break;
            }
            //detect capital
            if(has_checked==0&&hit_factors[1]==0){
                for(int z=0;z<26;z++){
                    if(Capitals[z]==input[j]){
                        hit_factors[1]=1;
                        has_checked=1;
                        break;
                    }
                }
            }
            //detect letter
            if(has_checked==0&&hit_factors[2]==0){
                for(int z=0;z<26;z++){
                    if(letters[z]==input[j]){
                        hit_factors[2]=1;
                        has_checked=1;
                        break;
                    }
                }
            }
            //detect number
            if(has_checked==0&&hit_factors[3]==0){
                for(int z=0;z<10;z++){
                    if(nums[z]==input[j]){
                        hit_factors[3]=1;
                        has_checked=1;
                        break;
                    }
                }
            }
            //detect symbol
            if(has_checked==0&&hit_factors[4]==0){
                for(int z=0;z<7;z++){
                    if(symbols[z]==input[j]){
                        hit_factors[4]=1;
                        has_checked=1;
                        break;
                    }
                }
            }

        }
        if(8<=num&&num<16){
            hit_factors[0]=1;
        }
        int sum=0;
        for(int j=0;j<5;j++){
            //printf("%d,",hit_factors[j]);
            sum+=hit_factors[j];
        }
        //printf("\n");
        if(hit_factors[0]==1&&sum>=4){
            printf("YES");
        }else{
            printf("NO");
        }
        if(i<inp_nums-1){
            printf("\n");
        }
    }

}