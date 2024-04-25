#include<stdio.h>
#include<conio.h>
#include<math.h>

void pheptoan(int n){   //dinh nghia ham
    unsigned long s=0;
    for(int i=1;i<=n;i++){
        s += pow(i,2);
    }
    printf("\ns=1+2^3+3^3+...%d^3 bang:%d",n,s);
}

int main(){
    int n;
    //nhap du lieu co dieu kien
    do{
        printf("nhap n (n>0):"); scanf("%d",&n);
    }while(n<=0);
    pheptoan(n);  // goi ham
    
    getch();
    return 0;
}