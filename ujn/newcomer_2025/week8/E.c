#include <stdio.h>
//Author:ocero
//20251107
int main(){
	int c[10]={0,0,0,0,0,0,0,0,0,0};
	scanf("%d %d %d %d %d %d %d %d %d %d",&c[0],&c[1],&c[2],&c[3],&c[4],&c[5],&c[6],&c[7],&c[8],&c[9]);
	int person_max_height=0;
	scanf("%d",&person_max_height);
	int tool_height=30;
	int hit_positions=0;
	for(int i=0;i<10;i++){
		int cur_position=c[i];
		if(person_max_height>=cur_position || person_max_height+tool_height>=cur_position){
			hit_positions++;
		}
	}
	printf("%d",hit_positions);
	return 0;
}
