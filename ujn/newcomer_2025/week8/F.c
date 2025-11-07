#include <stdio.h>

int main(){
	int length=0;
	scanf("%d",&length);
	int list[length];
	for(int i=0;i<length;i++){
		scanf("%d",&list[i]);
	}
	int tmp[1000];
	int tmp_res[length];
	int res_num=0;
	for(int i=0;i<1000;i++){
		tmp[i]=0;
	}
	for(int i=0;i<length;i++){
		tmp_res[i]=0;
	}
	for(int i=0;i<length;i++){
		int item=list[i];
		tmp[item-1]++;
	}
	for(int i=0;i<1000;i++){
		if(tmp[i]>=1){
			tmp_res[res_num]=i+1;
			res_num++;
		}
	}
	printf("%d\n",res_num);
	for(int i=0;i<length;i++){
		if(tmp_res[i]==0){
			continue;
		}
		printf("%d",tmp_res[i]);
		if(tmp_res[i+1]!=0){
			printf(" ");
		}
	}
	return 0;
	
}
