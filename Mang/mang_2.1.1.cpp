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

void timboi(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]%3==0&&a[i]%5==0){
            printf("%d\t",a[i]);
        }
    }
}

int main(){
    int a[max],n;
    nhapkichthuoc(n);
    nhapmang(a,n);
    printf("\ncac phan tu cua mang: ");
    xuatmang(a,n);
    printf("\ncac phan tu la boi cua 3 va 5 la: ");
    timboi(a,n);

    getch();
    return 0;
}