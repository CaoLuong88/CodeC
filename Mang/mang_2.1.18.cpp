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

void nhapx(int &x){
    printf("\nnhap x de dem so lan x xuat hien trong mang : ");
    scanf("%d",&x);
}

void demnhohonx(int a[],int n,int x){
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i]<x){
            dem++;
        }
    }
    printf("\nco %d phan tu nho hon x",dem);
}


int main(){
    int a[max],n,x;
    nhapkichthuoc(n);
    nhapmang(a,n);
    printf("\ncac phan tu cua mang: ");
    xuatmang(a,n);

    nhapx(x);
    

    demnhohonx(a,n,x);

    

    return 0;
}