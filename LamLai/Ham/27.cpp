#include<stdio.h>
void tongUoc(long so){
	int tong=0;
	for(int i=1;i<=so;i++){
		if(so%i==0){
			tong+=i;
			printf("\n cac so cua uoc la:%d",i);
		}
	}
	printf("\n tong uoc=%d",tong);
}
int main(){
    long n ;
	do{
		printf("nhap n=");scanf("%d",&n);
	}while(n<=0);
	tongUoc(n);
}
