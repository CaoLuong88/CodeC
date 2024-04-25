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

int diachimax(int a[],int n){
    int somax = 0;
    for(int i=0;i<n;i++){
        if(a[i]>somax)
        somax = a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==somax)
        return i;
    }
    return 0;
}

int diachimin(int a[],int n){
    int somin = a[0];
    for(int i=0;i<n;i++){
        if(a[i]<somin)
        somin = a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==somin)
        return i;
    }
    return 0;
}

int main(){
    int a[max],n,x;
    nhapkichthuoc(n);
    nhapmang(a,n);
    printf("\ncac phan tu cua mang: ");
    xuatmang(a,n);

    printf("\nvi tri cua phan tu lon nhat a[%d]=%d",diachimax(a,n),a[diachimax(a,n)]);
    printf("\nvi tri cua phan tu nho nhat a[%d]=%d",diachimin(a,n),a[diachimin(a,n)]);


    return 0;
}