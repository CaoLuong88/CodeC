#include<stdio.h>
#include<conio.h>

#define max 100

void nhapmang(int a[], int &n){
    printf("nhap so phan tu :" ); scanf("%d",&n);

    for(int i=0;i<n;i++){
     printf("a[%d] = ",i); scanf("%d",&a[i]);
    }
}
void xuatmang(int a[],int n){
    for(int i=0;i<n;i++){
        printf(" %4d ",a[i]);
    }
}

void chen(int a[],int n){
    int c,k;
    printf("\nnhap gia tri c chen vao vi tri k");
    printf("\nc = "); scanf("%d",&c);
    do{
        printf("\nk = "); scanf("%d",&k);
    }while(k<0||k>n);

    for(int i=n;i>=k;i--){
        a[i]=a[i-1];
    }
    a[k]=c;
    n++;
    printf("sau khi chen: ");
    xuatmang(a,n);
}


int main(){
    int a[max], n, c, k;

    nhapmang(a,n);
    printf("mang a[]: ");
    xuatmang(a,n);
    

    chen(a,n);
    
    getch();
    return 0;
}