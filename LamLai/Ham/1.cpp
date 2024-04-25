#include<stdio.h>
float dientich(float a,float b){
	float s=a*b;
	return s;
	
}
float chuvi(float a,float b){
	float p=((a+b)*2);
	return p;
}
int main(){
	float a,b;
	do{
		printf("nhap chieu dai a=");
		scanf("%f",&a);
		printf("nhap chieu rong b=");
		scanf("%f",&b);
	}while(a<=0||b<0);
	printf("dien tích chu nhat:%f",dientich(a,b));
	printf("xhu vi chu nhat:%f",chuvi(a,b));
}
