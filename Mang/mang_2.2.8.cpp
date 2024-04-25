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


void sochanlendau(int a[],int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[j]%2==0){
                hoandoi(a[i],a[j]);
            }
        }
    }
}

void xapxepchantang(int a[],int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[j]%2==0){
                if(a[i]>a[j]){
                    hoandoi(a[i],a[j]);
                }
            }
        }
    }
}


int main(){
    int a[max], n;

    nhapmang(a,n);
    xuatmang(a,n);

    sochanlendau(a,n);
    xapxepchantang(a,n);
    printf("\ndua chan len dau theo thu tu tang dan: ");
    xuatmang(a,n);
    
    getch();
    return 0;
}

    
