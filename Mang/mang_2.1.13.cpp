#include<stdio.h>
#include<conio.h>
#include<math.h>

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

bool kiemtrasonguyento(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}

void vitrisognuyento(int a[],int n){
    for(int i=0;i<n;i++){
        if(kiemtrasonguyento(a[i])&&a[i]>13){
            printf("\na[%d]=%d",i,a[i]);
        }
    }
}


int main(){
    int a[max],n;
    nhapkichthuoc(n);
    nhapmang(a,n);
    printf("\ncac phan tu cua mang: ");
    xuatmang(a,n);

    printf("\ncac so nguyen to trong mang la: ");
    vitrisognuyento(a,n);


    return 0;
}