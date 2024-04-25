#include<stdio.h>
#include<math.h>
#include<conio.h>

bool kiemtrasonguyento(int n){
    if(n<=2){
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main(){
    int n;
    do{
        printf("nhap n la so nguyen duong; "); scanf("%d",&n);
    }while(n<=0);

    if(kiemtrasonguyento(n)){
        printf("\n n la so nguyen to");
    }else{
        printf("\n n khong phai la so nguyen to");
    }
    return 0;
}