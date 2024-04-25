#include<stdio.h>
#define pi 3.1415
float chuvi(float r){
	float p=2*pi*r;
	return p;
	
}
float dientich(float r){
	float s=pi*pi*r;
	return s;
}
int main(){
	float r;
	do{
		printf("nhap r=");
		scanf("%f",&r);
		
	}while(r<0);
	printf("chu vi:%f",chuvi(r));
	
	printf("dien tich:%f",dientich(r));
}
