#include<stdio.h>
int fibonacci(int n){
	if(n<0){
		return -1;
	}else if (n==0||n==1){
		return n;
	}else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
int main(){
	int n;
	printf("nhap n=");scanf("%d",&n);
	printf("fn=%d",fibonacci(n));
}
