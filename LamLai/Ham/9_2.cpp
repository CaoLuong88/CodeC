#include<stdio.h>
void findMaxDigit(int num){
	int maxDigit=-1;
	int position=-1;
	int currentDigit,temp;
	temp=num; // luu gia tri cau so nhap de khong thay doi gia tri goc
	
	currentDigit=temp%10;
	temp/=10;
	if(currentDigit>maxDigit){
		maxDigit=currentDigit;
		position=2;
	}
	currentDigit=temp%10;
	temp/=10;
	if(currentDigit>maxDigit){
		maxDigit=currentDigit;
		position=1;
	}
	currentDigit=temp%10;
	if(currentDigit>maxDigit){
		maxDigit=currentDigit;
		position=0;
	}
	printf("chu so lon nhat= %d,nam o vi tri:",maxDigit);
	switch (position){
		case 0:
			printf("ham tram");
			break;
		case 1:
			printf("ham chuc");
			break;
		case 2:
			printf("ham don vi");
			break;
		default:
			printf("khong xac dinh");
			break;			
	}
	
}
int main(){
	int n;
	printf("nhap n=");scanf("%d",&n);
	if(n<100|| n>999)
	printf("nhap 1 so gom 3 chu so");
	else findMaxDigit(n);
	
}
