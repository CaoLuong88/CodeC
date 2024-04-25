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

void tongchantongle(int a[],int n){
    int chan = 0,tongchan =0,le =0, tongle=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            chan = a[i];
            tongchan += chan;
        }else{
            le = a[i];
            tongle += le;
        }
    }
    printf("\ntong cac phan tu chan: %d",tongchan);
    printf("\ntong cac phan tu le: %d",tongle);

}


int main(){
    int a[max],n;
    nhapkichthuoc(n);
    nhapmang(a,n);
    printf("\ncac phan tu cua mang: ");
    xuatmang(a,n);

    tongchantongle(a,n);
    

    return 0;
}