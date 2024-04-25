#include<stdio.h>
#include<math.h>
#include<conio.h>
float f2x(int x){
	float f2x;
	if(x<-1){
		f2x=2*x;
		return f2x;
	}
	if(-1<=x && x<=1){
		f2x=sin(x);
		return x;
	}
	if(x>1){
		f2x=cos(x)+exp(sqrt(x));
		return f2x;
	}
}
	int main(){
		float x;
		printf("nhap x=");
		scanf("%f",&x);
		printf("fx=%f",f2x(x));
	
}
