#include<stdio.h>
int* DigitAscending(int num){ // tra ve 1 con tro
    static	int digit[3];
	for(int i=0;i<3;i++){
		digit[i]=num%10;
		num/=10;
	}
	int temp;
	int swapped;
	do{
		swapped=0; // kh�ng c� ho�n d�i n�o xay xa trong 1 lan lap
		for(int i=0;i<2;i++){
			if(digit[i]>digit[i+1]){
				temp=digit[i];
				digit[i]=digit[i+1];
				digit[i+1]=temp;
				swapped=1;// d�nh d�u d� xay ra ho�n doi phan tu trong lan lap hi?n tai
			}
		}
	}while(swapped);// dam bao phan tu duoc hoan doi khi mang duoc sap xep ho�n toan
	return digit;
}
int main(){
	int n;
	printf("nhap n=");scanf("%d",&n);
	int* sortedDigit=DigitAscending(n);// nhan mang chua c�c chu so da sap xep tu ham
	printf("thu tu cac chu so=%d%d%d",sortedDigit[0],sortedDigit[1],sortedDigit[2]);
}
