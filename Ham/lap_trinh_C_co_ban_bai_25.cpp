#include<stdio.h>
#include<conio.h>

void ucln(int a, int b){
    if(a==0||b==0){
        printf("UCLN bang: %d",(a==0)?b:a);
    }else{
        while(a!=b){
            if(a>b){
                a=a-b;
            }else{
                b=b-a;
            }
        }
        printf("UCLN bang : %d",a);
    }
}

int main(){
    int a, b;
    printf("nhap gia tri cua a: "); scanf("%d",&a);
    printf("\nnhap gia tri cua b: "); scanf("%d",&b);

    ucln(a,b);
    
    getch();
    return 0;
}