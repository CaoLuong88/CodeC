#include<stdio.h>
#include<conio.h>
#define max 100

void nhapmang(int a[], int &n){
    do{
        printf("nhap kich thuoc mang a[]: "); scanf("%d",&n);
    }while(n<0||n>100);
    for(int i = 0; i < n;i++){
        printf("a[%d] = ",i); scanf("%d",&a[i]);
    }
}

void xuatmang(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%5d",a[i]);
    }
}

void hoandoi(int &a,int &b){
    int cho = a;
    a = b;
    b = cho;
}

void xeptangdan(int a[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j])
            hoandoi(a[i],a[j]);
        }
    }
}

bool kiemtrac(int a[],int n,int c){
    for(int i=0;i<n;i++){
        if(a[i]==c)
        return 1;
    }
    return 0;
}

int diachic(int a[],int n,int c){
    if(c<a[0]){
        return 0;
    }
    if(c>a[n-1]){
        return n;
    }
    for(int i=0;i<n;i++){
        if(a[i]<c&&c<a[i+1]){
            return i;
        }
    }
    return 0;
}

void chenc(int a[],int &n,int c){  
    for(int i = n;i>diachic(a,n,c);i--){
        a[i] = a[i-1];
    }
    a[diachic(a,n,c)] = c;
    n++;
}


int main(){
    int a[max], n, c;

    nhapmang(a,n);
    printf("mang a[]: ");
    xuatmang(a,n);

    xeptangdan(a,n);
    printf("\nsau khi sap sep mang a[]: ");
    xuatmang(a,n);

    
    printf("\nchen c vao trong day c = "); scanf("%d",&c);
    if(kiemtrac(a,n,c)){
        printf("\ngia tri c da co trong mang");
    }else{
        chenc(a,n,c);
        xuatmang(a,n);
    }

    return 0;
}