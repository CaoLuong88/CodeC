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

void chenx(int a[], int n){
    int x;
    printf("\nchen x vao sau gia tri lon nhat: "); scanf("%d",&x);
    for(int i = n;i>diachimax(a,n);i--){
        a[i] = a[i-1];
    }
    a[diachimax(a,n)+1] = x;
    n++;
    xuatmang(a,n);
}


int main(){
    int a[max],n,x;
    
    nhapmang(a,n);
    printf("\ncac phan tu cua mang: ");
    xuatmang(a,n);

    chenx(a,n);

    getch();
    return 0;
}