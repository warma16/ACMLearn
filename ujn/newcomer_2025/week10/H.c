#include <stdio.h>

int main(){
	int datas=0;
	scanf("%d",&datas);
	for(int i=0;i<datas;i++){
		int y=0;
		int n=0;
		scanf("%d %d",&y,&n);
		int ty=0;
		while(1){
			if( (y%4==0 && y%100!=0) || y%400==0){
				ty++;
			}
			if(ty==n){
				break;
			}
			y++;
		}
		printf("%d\n",y);
		
	}
	return 0;
}
