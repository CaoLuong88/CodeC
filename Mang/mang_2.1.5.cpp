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

int giatrimax(int a[],int n){
    int somax = 0;
    for(int i=0;i<n;i++){
        if(a[i]>somax)
        somax = a[i];
    }
    return somax;
}

int giatrimin(int a[],int n){
    int somin = a[0];
    for(int i=0;i<n;i++){
        if(a[i]<somin)
        somin = a[i];
    }
    return somin;
}    



int main(){
    int a[max],n,x;
    nhapkichthuoc(n);
    nhapmang(a,n);
    printf("\ncac phan tu cua mang: ");
    xuatmang(a,n);

    printf("\n phan tu lon nhat trong mang la: %d",giatrimax(a,n));

    printf("\nphan tu nho nhat trong mang la: %d",giatrimin(a,n));

    return 0;
}