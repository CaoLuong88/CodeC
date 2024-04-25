
#include<stdio.h>

void nhap(int a, int b){
    int max;
    do{
        printf("\nNhap a: "); scanf("%d", &a);
        printf("Nhap b: "); scanf("%d", &b);
        if(a>b){
            max=a;
        }else{
            max=b;
        }
        if(max>0 && max%7==0){
            printf("\n max=%d",max);
            break;
        }else{
            printf("sai dieu kien nhap lai:");
        }
    }while(true);
}

int main(){
    int a, b;
    printf("nhap a va b sao cho so lon nhat trong 2 so chia het cho 7:");
    nhap(a, b);
    
}
