#include <stdio.h>
int main(){
	//int mom=300*12;
	int bank=0;
	int child=0;
	int child_m_cost=0;
	int op=0;
	//int child_y_cost=0;
	for(int i=0;i<12;i++){
		child_m_cost=0;
		child+=300;
		//mom-=300;
		scanf("%d",&child_m_cost);
		//printf("==================");
		//printf("child:%d\n",child);
		child-=child_m_cost;
		if(child<0){
			op=-(i+1);
			break;
		}
		if(child>=100){
			int saving=(int)(child/100)*100;
			//printf("saving %d\n",saving);
			child-=saving;
			bank+=saving;
		}
		//printf("child:%d\n",child);
		
	}
	if(op>=0){
		child +=bank + bank / 5;
		bank=0;
		op=child;
	}
	printf("%d",op);
	return 0;
}
