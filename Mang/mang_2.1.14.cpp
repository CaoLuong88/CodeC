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

void demsoduong(int a[],int n){
    int duong = 0, am =0;
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            duong++;
        }else{
            am++;
        }
    }
    printf("\nco %d phan tu am trong mang",am);
    printf("\nco %d phan tu duong trong mang",duong);

}


int main(){
    int a[max],n;
    nhapkichthuoc(n);
    nhapmang(a,n);
    printf("\ncac phan tu cua mang: ");
    xuatmang(a,n);

    demsoduong(a,n);
    

    return 0;
}