#include<stdio.h>
#define max 100
int i;
void kichThuoc(int &n){
	do{
		printf("nhap kich thuoc mang:");scanf("%d",&n);
		
	}while(n<=0||n>100);
}
void nhapMang(int a[],int n){
	for( i=0;i<n;i++){
		printf("a[%d]=",i);scanf("%d",&a[i]);
	}
}
void xuatMang(int a[],int n){
	for( i=0;i<n;i++){
		printf("%d \t",a[i]);
	}
}

void timBoi(int a[],int n){
	for( i=0;i<n;i++){
		if(a[i]%3==0 && a[i]%5==0){
			printf("%d \t",a[i]);
		}
	}
}
int main(){
	int a[max],n;
	kichThuoc(n);
	nhapMang(a,n);
	printf("\n cac phan tu mang:");
	xuatMang(a,n);
	printf("\n cac phan tu la boi cua 3 va 5 la:");
	timBoi(a,n);
}
