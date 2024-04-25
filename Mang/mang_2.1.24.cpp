#include<stdio.h>
#include<conio.h>

#define max 100

void nhapkichthuoc(int &n){
    do{
        printf("nhap kich thuoc cua mang: "); scanf("%d",&n);
    }while(n<=0||n>100);
}

void nhapmang(int a[],int n){
    for(int i=0;i<n;i++){
        printf("a[%d] = ",i); scanf("%d",&a[i]);
    }
}

void xuatmang(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}

void tongchia(int a[],int n){
    int chia =0, tongchia =0;
    for(int i=0;i<n;i++){
        if(a[i]%5==0){
            chia = a[i];
            tongchia += chia;
        }
    }
    printf("\ntong cac phhan tu chia het cho 5 : %d",tongchia);
}

int main(){
    int a[max],n;
    nhapkichthuoc(n);
    nhapmang(a,n);
    printf("\ncac phan tu cua mang: ");
    xuatmang(a,n);

    tongchia(a,n);
    
    return 0;
}