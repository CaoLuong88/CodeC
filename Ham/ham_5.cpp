#include<stdio.h>
#include<math.h>
#include<conio.h>

float f2x(int x){
    float f2x;
    if(x<-1){
        f2x=2*x;
        return f2x;
    }
    if((-1<=x)&&(x<=1)){
        f2x = acos (x);
        return f2x;
    }
    if(x>1){
        f2x = sin(x)+exp(sqrt(x));
        return f2x;
    }
    return 0;
}

int main(){
    float x;
    printf("nhap gia tri cua x:"); scanf("%f",&x);

    printf("\nf2x = %.2f",f2x(x));
}