#include<stdio.h>
void ucln(int a,int b){
	if(a==0|| b==0){
		printf("ucln=%d",(a==0)?b:a);
	}else{
		while(a!=b){
			if(a>b){
				a=a-b;
			}else{
				b=b-a;
			}
		}
		printf("ucln=%d",a);
	}
}
int main(){
	int a,b;
	printf("nhap a=");scanf("%d",&a);
	printf("\n nhap b=");scanf("%d",&b);
	ucln(a,b);
}

