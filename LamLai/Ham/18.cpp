#include<stdio.h>

void tongTP(int n){
	float s=0;
	for(int i=1;i<=n;i++)
	s+=(float)1/i;
	
printf("tong s=%f",s);
}
int main(){
	int n;
	do{
	printf("nhap n=");scanf("%d",&n);
		
	}while(n<=0);
	tongTP(n);
	}

