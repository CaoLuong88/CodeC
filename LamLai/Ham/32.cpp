#include<stdio.h>
void Triangle(int h){
	for(int i=1;i<=h;i++){
		for(int j=1;j<=2*h-1;j++){
			if(i==h||i+j==h+1||j-i==h-1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
		
	}
}
int main(){
	int a;
	printf("nhap do cao h tam giac:");scanf("%d",&a);
	if(a>0){
		Triangle(a);
	}else
	printf("nhap lai");
}
