#include<stdio.h>
void Rectangle(int m,int n){
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(i==1||i==m||j==1||j==n){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
int main(){
	int a,b;
	do{
		printf("nhap a b :");scanf("%d %d",&a,&b);
	}while(a<=0||b<=0);
	Rectangle(a,b);
}
