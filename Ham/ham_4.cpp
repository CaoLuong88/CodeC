#include<stdio.h>
#include<math.h>
#include<conio.h>

float fx(float x){
    float fx = 0;
    if(x<=-1){
        fx=x;
        return fx;
    }
    if((x>-1)&&(x<=1)){
        fx = asin (x);
        return fx;
    }
    if(x>1){
        fx = cos(x)+exp(sqrt(x));
        return fx;
    }
    return 0;
}

int main(){
    float x;
    printf("nhap gia tri cua x:"); scanf("%f",&x);

    printf("\nvoi x = %.2f thi fx = %.2f",x,fx(x));
}