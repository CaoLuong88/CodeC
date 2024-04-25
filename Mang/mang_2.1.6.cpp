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

int duongbe(int a[],int n){
    int min = a[0];
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            if(a[i]<min){
                min = a[i];
            }
        }
    }
    return min;
}



int main(){
    int a[max],n;
    nhapkichthuoc(n);
    nhapmang(a,n);
    printf("\ncac phan tu cua mang: ");
    xuatmang(a,n);

    printf("\nphan tu duong be nhat trong mang la: %d",duongbe(a,n));
   

    return 0;
}