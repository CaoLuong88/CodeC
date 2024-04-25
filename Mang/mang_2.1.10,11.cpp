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

void nhapx(int &x){
    printf("\ntim vi tri phan tu co gia tri x xuat hien trong mang : ");
    scanf("%d",&x);
}

int timxdautien(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(a[i]==x){
            return i;
        }
    }
    return 0;
}

int timxcuoicung(int a[],int n,int x){
    for(int i=n-1;i>=0;i--){
        if(a[i]==x){
            return i;
        }
    }
    return 0;
}




int main(){
    int a[max],n,x;
    nhapkichthuoc(n);
    nhapmang(a,n);
    printf("\ncac phan tu cua mang: ");
    xuatmang(a,n);

    nhapx(x);
   
   printf("\nvi tri phan tu x dau tien a[%d]",timxdautien(a,n,x));

   printf("\nvi tri phan tu x cuoi cung a[%d]",timxcuoicung(a,n,x));
    

    return 0;
}