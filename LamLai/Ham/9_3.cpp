#include<stdio.h>
void findMaxDigit(int num){
	int position=0;
	int maxDigit=0;
	int currentDigit,temp;
	temp=num;
	while(temp>0){
	
	currentDigit=temp%10;
	temp/=10;
	if(currentDigit>maxDigit){
	
	maxDigit=currentDigit;
	position=temp==0 ? 2:(temp==num/10?1:0);
}
}
	printf("chu so lon nhat la=%d,nam o vi tri ",maxDigit);
	switch(position){
		case 0:
			printf("hang chuc");
			break;
			case 1:
			printf("hang don vi");
			break;
			case 2:
			printf("hang tram");
			break;
			default:
			printf("ko");
			break;
	}

}
int main(){
	int n;
	printf("nhap n=");scanf("%d",&n);
	while(n<100||n>999){
	
	printf("nhap 1 so co 3 chu so");
	scanf("%d",&n);
	} findMaxDigit(n);
	
}


