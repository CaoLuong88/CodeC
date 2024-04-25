#include<stdio.h>
void TamGiac(int h){
	int i,j;
	for(i=0;i<=h-2;i++){
	for(j=0;j<=2*(h-1);j++){
		if(j==h-1+i||j==h-1-i){
			printf("*");
		}else{
			printf(" ");
		}
	}printf("\n");
	}
	for(j=0;j<=2*(h-1);j++){
		printf("*");
	}
}
int main(){
	int a;
	printf("nhap h=");scanf("%d",&a);
	TamGiac(a);
}
