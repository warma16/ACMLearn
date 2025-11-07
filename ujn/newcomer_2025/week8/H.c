#include <stdio.h>
int main(){
	//int is_happy=1;
	int max_unhappy=0;
	int overwhelmed_day=0;
	for(int i=0,ta=0,tb=0;i<7;i++){
		scanf("%d %d",&ta,&tb);
		if(ta+tb>=8){
			
			if(max_unhappy<ta+tb-8){
				max_unhappy=ta+tb-8;
				overwhelmed_day=i+1;
			}
		}
		
		
	}
	printf("%d",overwhelmed_day);
	return 0;
}
