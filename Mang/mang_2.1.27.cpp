#include<stdio.h>
#include<conio.h>
#define max 100

void nhapkichthuoca(int &n){
    do{
        printf("nhap kich thuoc cua mang a[]: "); scanf("%d",&n);
    }while(n<=0||n>100);
}

void nhapmanga(float a[],int n){
    for(int i=0;i<n;i++){
        printf("a[%d] = ",i); scanf("%f",&a[i]);
    }
}


void nhapkichthuocb(int &m){
    do{
        printf("nhap kich thuoc cua mang b[]: "); scanf("%d",&m);
    }while(m<=0||m>100);
}

void nhapmangb(float b[],int m){
    for(int i=0;i<m;i++){
        printf("a[%d] = ",i); scanf("%f",&b[i]);
    }
}

int main(){
    float a[max],b[max];
    int an;

    nhapkichthuoca(m);
    nhapmanga(a,m);
}
    