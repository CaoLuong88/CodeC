#include<stdio.h>
#include<conio.h>

#define max 100

void nhapmanga(int a[],int &n){
    do{
        printf("nhap kich thuoc cua mang a[]: "); scanf("%d",&n);
    }while(n<0||n>100);

    for(int i=0;i<n;i++){
        printf("a[%d] = ",i); scanf("%d",&a[i]);
    }
}

void nhapmangb(int b[],int &m){
    do{
        printf("\nnhap kich thuoc cua mang b[]: "); scanf("%d",&m);
    }while(m<0||m>100);

    for(int i=0;i<m;i++){
        printf("b[%d] = ",i); scanf("%d",&b[i]);
    }
}

void xuatmang(int a[],int n){
    printf("cac gia tri mang : ");
    for(int i=0;i<n;i++){
        printf("%6d\t",a[i]);
    }
}

void hoandoi(int &a, int &b){
    int cho = a;
    a = b;
    b = cho;
}

void xapxeptang(int a[],int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i]>a[j]){
                hoandoi(a[i],a[j]);
            }
        }
    }
}

void gep(int a[],int n,int b[],int m,int c[],int f){
    int i=0, j=0;
    f = m+n;
    for(int k=0;i<f;k++){
        if(i<m&&j<m){
            if(a[i]<=b[j]){
                c[k]=a[i];
                i++;
            }else{
                c[k]=b[j];
                j++;
            }
        }else{
            if(i<n){
                c[k]=a[i];
                i++;
            }
            if(j<n){
                c[k]=b[j];
                j++;
            }
        }
    }
    
}
void xuatmanggep(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%6d\t",a[i]);
    }
}


int main(){
    int a[max],b[max], n,m,c[max],f;

    nhapmanga(a,n);
    xuatmang(a,n);

    nhapmangb(b,m);
    xuatmang(b,m);

    xapxeptang(a,n);
    printf("\nmang a[] sap sep tang dan ");
    xuatmang(a,n);

    xapxeptang(b,m);
    printf("\nmang b[] sap sep tang dan ");
    xuatmang(b,m);

    gep(a,n,b,m,c,f);
    printf("\ngep mang a[] b[] tho huong tang dan ");
    xuatmang(c,f);
    return 0;
}