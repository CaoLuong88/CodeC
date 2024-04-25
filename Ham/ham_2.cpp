#include<stdio.h>
#define pi 3.141592

float chuvi(float r){
    float p = 2*pi*r;
    return p;
  
}

float dientich(float r){
    float s = pi*pi*r;
    return s;
}

int main(){

    float r;
    do{
    printf("-nhap ban kinh(r>0):");
    scanf("%f",&r);
    }while(r<=0);

    printf("\nchu vi hinh tron la:%.2f",chuvi(r));
    printf("\ndien tich hinh tron la:%.2f",dientich(r));

}
