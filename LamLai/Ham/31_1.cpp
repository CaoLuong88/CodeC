#include<stdio.h>
void hcn(int m,int n){
	int i,j;
	for(j=0;j<n;j++)
	printf("*");
	printf("\n");
	for(i=1;i<m-1;i++){
		for(j=0;j<n;j++){
			if(j==0||j==n-1){
				printf("*");
			}else{
				printf(" ");
			}
		}printf("\n");
	}
	for(j=0;j<n;j++)
	printf("*");
}
int main(){
	int a,b;
	printf("nhap chieu cao a=");scanf("%d",&a);
	printf("nhap chieu rong b=");scanf("%d",&b);
	hcn(a,b);
}
