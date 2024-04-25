#include<stdio.h>
int fibonaci(int n){
	int f0=0,f1=1,i;
	int fn=1;

	if(n<0){
		return -1;
	}else if(n==0||n==1){
		return n;
	}else {
		for(i=2;i<n;i++){
			f0=f1;
			f1=fn;
			fn=f0+f1;
		}
	}
	return fn;
}
int main(){
	int n;
	printf(" nhap  n= "); scanf("%d",&n);
	printf("fn=%d",fibonaci(n))
	;
	}

