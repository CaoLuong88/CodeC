#include<stdio.h>
#include<conio.h>

#define max 100

void nhapmang(int a[],int &n){
    do{
        printf("nhap kich thuoc cua mang: "); scanf("%d",&n);
    }while(n<0||n>100);

    for(int i=0;i<n;i++){
        printf("a[%d] = ",i); scanf("%d",&a[i]);
    }
}

void xuatmang(int a[],int n){
    printf("cac gia tri mang a[]: ");
    for(int i=0;i<n;i++){
        printf("%6d\t",a[i]);
    }
}



void hamdaonguoc(int a[],int n){
    for(int i = 0; i < n/2; i++){
        int cho = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = cho;
    }
}




int main(){
    int a[max], n;

    nhapmang(a,n);
    xuatmang(a,n);

    hamdaonguoc(a,n);
    xuatmang(a,n);
    
    getch();
    return 0;
}