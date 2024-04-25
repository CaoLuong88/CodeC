#include<stdio.h>
void AscendingDigit(int num){
	int digitArray[3];
	int i=0;
	while(num>0){
		digitArray[i]=num%10;
		num/=10;
		i++;
	}
	int temp;
	for(int j=0;j<2;j++){
		for(int k=0;k<2-j;k++){
			if(digitArray[k]>digitArray[k+1]){
				temp=digitArray[k];
				digitArray[k]=digitArray[k+1];
				digitArray[k+1]=temp;
			}
		}
	}
	printf("thu tu cac chu so la=");
	for(int j=0;j<3;j++)
	printf("%d",digitArray[j]);
}
int main(){
	int n;
	printf("nhap n=");scanf("%d",&n);
	AscendingDigit(n);
}
