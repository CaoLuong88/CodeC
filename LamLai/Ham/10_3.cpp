#include<stdio.h>
void printIncreasingOrder(int number){
	int digits[3];
	int i;
	for(i=0;i<3;i++){
		digits[i]=number%10;
		number/=10;
		
	}
	for(i=0;i<2;i++){
		for(int j=i+1;j<3;j++){
			if(digits[i]>digits[j]){
				int temp=digits[i];
				digits[i]=digits[j];
				digits[j]=temp;
			}
		}
	}
	printf("thu tu cac chu so:");
	for(i=0;i<3;i++){
		printf("%d",digits[i]);
		
	}
}
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	printIncreasingOrder(n);
	return 0;
}
