#include <stdio.h>
int gcd(int bigger,int smaller){
	int tmp=0;
	while(smaller != 0){
		tmp=bigger%smaller;
		bigger=smaller;
		smaller=tmp;
	}
	return bigger;
	
	
}

int main(){
	int a=0,b=0;
	while(~scanf("%d %d",&a,&b)){
		int res=-123;
		if(a>=b){
			res=gcd(a,b);
		}else{
			res=gcd(b,a);
		}
		printf("%d %#x %#o\n",res,res,res);
	}
	return 0;
}
