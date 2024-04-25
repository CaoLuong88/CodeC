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
    printf("\nnhap x de xuat ra cac gia tri trong mang tu 1 den x : ");
    scanf("%d",&x);
}

void xuatdieukienx(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(a[i]>=1&&a[i]<=x){
            printf("%6d",a[i]);
        }
    }
}


int main(){
    int a[max],n,x;
    nhapkichthuoc(n);
    nhapmang(a,n);
    printf("\ncac phan tu cua mang: ");
    xuatmang(a,n);

    nhapx(x);
    printf("\ncac gia tri trong mang co gia tri tu 1 den %d: ",x);
    xuatdieukienx(a,n,x);

    

    return 0;
}