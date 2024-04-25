#include<stdio.h>
long doi(int n){

int sodu,hang=1;// khai bao bien sodu de luu phan du khi chuyen doi sang he nhi phan 
// khoi tao hang la 1 de dung trong viec tinhs toan hang don vi khi chuyen doi
long somoi=0;// khai bao somoi de luu tru so nguyen trong he nhi phan sau khi chuyen doi
while (n>0){
	sodu=n%2; //lay phan du cua n khi chia cho 2
	somoi=hang*sodu+somoi; // cong vao somoi phan du da tinh nhan voi hang
	n=n/2; // chia n cho 2 de tiep tuc xet phan nguyen cua n
	hang=hang*10; //nhan hang voi 10 de chuyen sang don vi tiep theo trong he nhi phan
}
return somoi; // so nguyen tuong ung trong he nhi phan
}
int main(){
	int n;
	do{
		printf("nhap so nguyen(0<n<10000)");
		scanf("%d",&n);
	}while(n<=0||n>=10000);
	printf("so nhi phan la=%ld",doi(n));
	
}

