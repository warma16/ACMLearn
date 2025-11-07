#include <stdio.h>
int main(){
	int size=0;
	scanf("%d",&size);
	int list[size];
	for(int i=0;i<size;i++){
		scanf("%d",&list[i]);
		//list[i]=0;
		
	}
	int times=0;
	for(int i=0;i<size;i++){
		if(i<size-1){
			for(int j=i+1;j<size;j++){
				if(list[j]<list[i]){
					times++;
				}
			}
		}
	}
	printf("%d",times);
	return 0;
}
