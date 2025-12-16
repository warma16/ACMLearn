#include <stdio.h>
int main(){
	int inpn=0;
	scanf("%d",&inpn);
	for(int i=0;i<inpn;i++){
		float up=0;
		float down=0;
		int subject_num=0;
		int has_canceled=0;
		scanf("%d",&subject_num);
		for(int j=0;j<subject_num;j++){
			char subject_name[30];
			float credit=0;
			float score=0;
			scanf("%s %f %f",&subject_name,&credit,&score);
			if(score<60){
				printf("Sorry!\n");
				has_canceled=1;
				break;
			}
			up+=credit*score;
			down+=credit;
		}
		if(has_canceled!=1){
			float GPA=up/down;
			printf("%.2f\n",GPA);
		}
		if(i<inpn-1){
			printf("\n");
		}
	}
}
