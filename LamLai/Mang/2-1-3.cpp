#include <stdio.h>
#define max 100
int i;
void KichThuoc(int &k){
	do{
		printf("nhap kich thuoc mang:");scanf("%d",&k);
	}while(k<=0||k>100);
}
void NhapMang(int a[], int l){
	for(i=0;i<l;i++){
		printf("a[%d]=",i);scanf("%d",&a[i]);
	}
}
void XuatMang(int b[],int m){
	for(i=0;i<m;i++){
		printf("%d \t",b[i]);
	}
}
void NhapX(int &x){
	printf("nhap x=");scanf("%d",&x);
}
void DieuKienX(int c[],int n,int y){
	for(i=0;i<n;i++){
		if(c[i]>=1&& c[i]<=y){
			printf(" ,%d vi tri = %d",c[i],i);
			
		}
		
	}

}
int main(){
	int d[max],o,z;
	KichThuoc(o);
	NhapMang(d,o);
	printf("\n cac gia tri mang:");
	XuatMang(d,o);
	NhapX(z);
	printf("\n cac gia tri cos dieu kien tu min den %d: ",z);
	DieuKienX(d,o,z);
	
}

