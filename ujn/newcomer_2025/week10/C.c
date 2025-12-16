#include <stdio.h>
#include <math.h>
int handle(int num_){
	return num_%9;
}
int main(){
	int a=-1;
	while(~scanf("%d",&a)&&a!=0){
		printf("%d\n",handle(a));
	}
	return 0;
}
