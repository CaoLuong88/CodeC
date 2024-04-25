#include<stdio.h>
#include<math.h>
void tong(int n){
	long s=0;
	for(int i=1;i<=n;i++){
		s+=pow(i,3);
	}
	printf(" tong s =%d",s);
}
int main(){
	int n;
	do{
		printf("nhap n:");scanf("%d",&n);
		
	}while(n<=0);
	tong(n);
}

