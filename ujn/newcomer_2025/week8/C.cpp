#include <stdio.h>
int main(){
	int row=1;
	int inp=0;
	int delta_nums=0;
	int is_row_final=0;
	scanf("%d",&inp);
	//多数量级优选
	if((1+1412)*1412/2<=inp){//997578
		row=1412;
	}
	if((1+1200)*1200/2<=inp){
			row=1200;
		}
	if((1+1000)*1000/2<=inp){
		row=1000;
	}
	if((1+750)*750/2<=inp){
			row=750;
	}
	if((1+500)*500/2<=inp){
		row=500;
	}
	if((1+250)*250/2<=inp){
			row=250;
	}
	if((1+100)*100/2<=inp){
			row=100;
	}
	if((1+50)*50/2<=inp){
			row=50;
	}
	for(int i=row;(1+i)*i/2<=inp;i++){
		row=i;
		if((1+i)*i/2==inp){
			is_row_final=1;
		}
	}
	//printf("%d\n",row);
	delta_nums=inp-((1+row)*row/2);
	//printf("%d\n",delta_nums);
	int bigger_number=(is_row_final==0)?row+1-(delta_nums-1):row-(delta_nums);
	int smaller_number=(is_row_final==0)?row+1+1-bigger_number:row+1-bigger_number;
	//printf("%d\n",bigger_number);
	if(row%2==0){
		if(is_row_final){
			printf("%d/%d",bigger_number,smaller_number);
			return 0;	
		}
		printf("%d/%d",smaller_number,bigger_number);
		
	}else{
		if(is_row_final){
			printf("%d/%d",smaller_number,bigger_number);
			return 0;	
		}
		printf("%d/%d",bigger_number,smaller_number);
	}
	
	
	/*if(begin_square%2==1){
		
	}*/
	return 0;
}
