#include <stdio.h>
int main(){
	int sum=0;
	int times=0;
	scanf("%d",&times);
	for(int i=0;i<times;i++){
		int tmp=0;
		scanf("%d",&tmp);
		if(tmp>0) sum+=tmp;
	}
	printf("%d",sum);
	return 0;
}
