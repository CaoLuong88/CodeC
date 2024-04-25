#include<stdio.h>
void SoLonNhat(int n){
	int a,b,c,luu=0;
	a=n/100;b=(n%100)/10;c=n%10;
	if(a<b){
		luu=a;
		a=b;
		b=luu;
	}
	if(b<c){
		luu=b;
		b=c;
		c=luu;
	}
	if(a<b){
		luu=a;
		a=b;
		b=luu;
	}
	printf("chu so lon nhat=%d",a);
	
}
int main(){
	int n;
	printf("nhap so co 3 chu so=");scanf("%d",&n);
	SoLonNhat(n);
}
	


