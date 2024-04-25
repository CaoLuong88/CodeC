#include<stdio.h>
void Binary(int num){
	int binary[32];
	int index=0;
	while(num>0){
		binary[index]=num%2;
		num/=2;
		index++;
	}
	printf("gia tri nhi phan:");
	for(int i=index-1;i>=0;i--){
		printf("%d",binary[i]);
	}
}
int main(){
	int n;
	printf("nhap so nguyen toi da 5 chu so=");
	scanf("%d",&n);
	if(n>=0&& n<=99999){
		Binary(n);
	}else{
		printf("vui long nhap 1 so nguyen ");
	}
	
}
