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

void tongleochan(int a[],int n){
    int le =0, tongle =0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(a[i]%2!=0){
                le = a[i];
                tongle += le;
            }
        }
    }
    printf("\ntong cac phan tu le o vi tri chan la: %d",tongle);
}

int main(){
    int a[max],n;
    nhapkichthuoc(n);
    nhapmang(a,n);
    printf("\ncac phan tu cua mang: ");
    xuatmang(a,n);

    tongleochan(a,n);
    return 0;
}