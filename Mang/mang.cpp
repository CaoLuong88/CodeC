#include<stdio.h>
#define max 100

void kichthuocmang(int &n){
    do{
        printf("nhap kich thuoc cua mang"); scanf("%d",&n);
    }while(n<=0||n>100);
}

void nhapmang(int a[],int n){
    for(int i=0;i<n;i++){
        printf("a[%d] = ",i); scanf("%d",&a[i]);
    }
}

void xuatham(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
int main(){

    int a[max],n;

    kichthuocmang(n);

    nhapmang(a,n);

    printf("cac gia tri mang a: ");
    xuatham(a,n);

}