#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define max 100

void nhapkichthuoc(int &n){
    do{
        printf("nhap kich thuoc cua mang: "); scanf("%d",&n);
    }while(n<=0||n>100);
}

void phatsinh(int a[],int n){
    for(int i=0;i<n;i++){
        a[i] = rand() % max + 1;
    }
}

void xuatmang(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}

int main(){
    int a[max],n;

    nhapkichthuoc(n);

    srand((unsigned int)time(NULL));
    phatsinh(a,n);

    printf("cac gia tri trong mang a: ");
    xuatmang(a,n);

}