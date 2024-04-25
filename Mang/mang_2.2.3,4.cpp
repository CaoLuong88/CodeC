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
        printf("%5d\t",a[i]);
    }
}

void hoandoi(int &a, int &b){
    int cho = a;
    a = b;
    b = cho;
}


void chiahetcho3lendau(int a[],int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[j]%3==0){
                hoandoi(a[i],a[j]);
            }
        }
    }
}

void chiahetcho3xuongcuoi(int a[],int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i]%3==0){
                hoandoi(a[i],a[j]);
            }
        }
    }
}



int main(){
    int a[max], n;

    nhapmang(a,n);
    xuatmang(a,n);

    chiahetcho3lendau(a,n);
    printf("\nxap xep cac gia tri chia het cho 3 cua mang len dau ");
    xuatmang(a,n);

    chiahetcho3xuongcuoi(a,n);
    printf("\nxap xep cac gia tri chia het cho 3 cua mang xuong cuoi ");
    xuatmang(a,n);

    getch();
    return 0;
}

    
