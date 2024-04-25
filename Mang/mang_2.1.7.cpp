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

int lelonnhat(int a[],int n){
    int lelon = 0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            if(a[i]>lelon){
                lelon = a[i];
            }
        }
    }
    return lelon;
}




int main(){
    int a[max],n;
    nhapkichthuoc(n);
    nhapmang(a,n);
    printf("\ncac phan tu cua mang: ");
    xuatmang(a,n);

    printf("\nso le lon nhat co trong mang la: %d",lelonnhat(a,n));

    return 0;
}