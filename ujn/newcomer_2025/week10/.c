#include <stdio.h>
int handle(int num_){
	int num=num_;
	while(1){
		int a=(num/10)%10;
		int b=num%10;
		int sum=a+b;
		if(num_%(a+b)==0){
			return sum;
		}
		num=sum;
	}
}
int main(){
	int a=-1;
	while(~scanf("%d",&a)&&a!=0){
		printf("%d",handle(a));
	}
	return 0;
}
