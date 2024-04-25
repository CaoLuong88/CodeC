#include<stdio.h>

float dientich(float a,float b){
    float s = a*b; 

    return s;

}

float chuvi(float a, float b){
    float p =((a+b)*2);

    return p;

}

int main(){
    float a , b;
    do{
        printf("\n-nhap du lieu chieu dai: a=");
    scanf("%f",&a);
    printf("\n-nhap du lieu chieu rong b=");
    scanf("%f",&b);
    }while(a<=0||b<=0);
    

    printf("\ndien tich chu nhat: %.2f",dientich(a,b));

    printf("\nchu vi chu nhat: %.2f",chuvi(a,b));

}
