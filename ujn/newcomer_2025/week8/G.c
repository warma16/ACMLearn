#include <stdio.h>
#include <math.h>
int main(){
	int p=0;
	scanf("%d",&p);
	for(int i=2;i*i<=p;i++){
		if(p%i == 0){
			while(p%i==0) p /= i;
		}
	}
	printf("%d\n",p);
	return 0;
}
