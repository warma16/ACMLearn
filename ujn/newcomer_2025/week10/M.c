#include <stdio.h>

int main(){
	int code=-1;
	while(code != 0){
		//get input data num
		scanf("%d",&code);
		if(code==0){
			break;
		}
		// state initial
		int last_state=0;
		int cur_state=0;
		int time=0;
		//input
		for(int i=0;i<code;i++){
			scanf("%d",&cur_state);
			//state update
			if(last_state<cur_state){
				time+=(cur_state-last_state)*6;
			}
			if(last_state>cur_state){
				time+=(last_state-cur_state)*4;
			}
			time+=5;
			if(last_state!=cur_state){
				last_state=cur_state;
			}
		}
		printf("%d\n",time);
		
		
	}
	
}
