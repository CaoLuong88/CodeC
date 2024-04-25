#include<stdio.h>
#define max 100
int i;
void KichThuoc(int &n){
	do{
		printf("nhap kich thuoc mang:");scanf("%d",&n);
	}while(n<0||n>100);
}
void NhapMang(int a[], int m){
	for(i=0;i<m;i++){
		printf("\n a[%d]=",i);scanf("%d",&a[i]);
	}
}
void XuatMang(int b[], int k){
	for(i=0;i<k;i++){
		printf("%d \t",b[i]);
	}
}
int SoChan(int c[], int l){
	for(i=l-1;i>=0;i--){
		if(c[i]%2==0){		
		return c[i];
	}
	} return -1;
}
int main(){
	int d[max],o;
	KichThuoc(o);
	NhapMang(d,o);
	printf("\n cac phan tu mang:");
	XuatMang(d,o);
	printf("so chan cuoi cung trong mang:%d, vi tri la:%d",SoChan(d,o),i);
}
