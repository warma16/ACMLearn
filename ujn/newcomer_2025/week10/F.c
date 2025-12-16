#include <stdio.h>
#include <math.h>

const double pi=4*atan(1);

int touch_drowning(double x,double y){
	int erosion_speed=50;
	int year=1;
	int has_not_erosioned=1;
	while(has_not_erosioned){
		int square=year*erosion_speed;
		double r_2=(square/pi)*2;
		if(x*x+y*y<=r_2){
			has_not_erosioned=0;
			break;
		}
		year++;
		
	}
	return year;
	
}

int main(){
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		double b,c;
		scanf("%lf %lf",&b,&c);
		int d_year=touch_drowning(b,c);
		printf("Property %d: This property will begin eroding in year %d.\n",i+1,d_year);
		
	}
	printf("END OF OUTPUT.");
}
