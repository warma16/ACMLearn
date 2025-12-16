#include <stdio.h>
#include <math.h>
int main(){
	int inputs=0;
	scanf("%d",&inputs);
	for(int i=0;i<inputs;i++){
		int inp=0;
		scanf("%d",&inp);
		double sum=0;
		for(int j=0;j<inp;j++){
			sum += log10(j+1);
		}
		printf("%d\n",(int)sum+1);
	}
}
