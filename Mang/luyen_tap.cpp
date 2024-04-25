#include<stdio.h>
#include<conio.h>
#define max 100

// nhap xuat mang
void nhapmanga(int a[], int &n){
    do{
        printf("nhap kich thuoc cua mang a[]: "); scanf("%d",&n);
    }while(n<0||n>100);
    for(int i = 0; i < n; i++){
        printf("a[%d] = ",i); scanf("%d",&a[i]);
    }
}
void nhapmangb(int b[], int &m){
    do{
        printf("nhap kich thuoc cua mang b[]: "); scanf("%d",&m);
    }while(m<0||m>100);
    for(int i = 0; i < m; i++){
        printf("b[%d] = ",i); scanf("%d",&b[i]);
    }
}
void xuatmang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%6d",a[i]);
    }
}

// xap xep day so theo thu tu tang dan va giam dan
void hoandoi(int &a,int &b){
    int cho = a;
    a = b;
    b = cho;
}
void xeptangdan(int a[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j = i+1;j<n;j++){
            if(a[i]>a[j]){
                hoandoi(a[i],a[j]);
            }
        }
    }
}
void xepgiamdan(int a[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j = i+1;j<n;j++){
            if(a[i]<a[j]){
                hoandoi(a[i],a[j]);
            }
        }
    }

}

// cac so chia het cho 3 len dau va xuong cuoi
void chiahet3lendau(int a[],int n){
    int i,j;
    for(i=n-1;i>=0;i--){
        for(j = i-1;j>=0;j--){
            if(a[i]%3==0){
                hoandoi(a[i],a[j]);
            }
        }
    }
}
void chiahet3xuongcuoi(int a[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j = i+1;j<n;j++){
            if(a[i]%3==0){
                hoandoi(a[i],a[j]);
            }
        }
    }
}

// xap xep le tang dan chan giam dan
void letangdan(int a[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j = i+1;j<n;j++){
            if(a[i]%2!=0&&a[i]>a[j]){
                hoandoi(a[i],a[j]);
            }
        }
    }
}
void changiamdan(int a[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j = i+1;j<n;j++){
            if(a[i]%2==0&&a[i]<a[j]){
                hoandoi(a[i],a[j]);
            }
        }
    }
}

// xep so chia het cho 2 ma khong chia het cho 3 xuong coi day
void xapsepcodk(int a[], int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j = i+1;j<n;j++){
            if(a[i]%2==0&&a[i]%3!=0){
                hoandoi(a[i],a[j]);
            }
        }
    }
}

// xep so chan len dau tang dan
void chanlendau(int a[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]%2==0&&a[i]<a[j]){
                hoandoi(a[i],a[j]);
            }
        }
    }
}

// dao nguoc ham
void daonguocmang(int a[],int n){
    int i,j;
    int k=n/2;
    for(i=0;i<k;i++){
        for(j=k;j<n;j++){
            hoandoi(a[i],a[j]);
        }
    }
}

//xap xep 2 day so tang dan va in ra. sau do gep 2 day thanh 1 day tang dan roi in ra
void gep2mangtangdan(int a[],int n,int b[],int m,int c[],int f){
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

// in ra cac phan tu xuat hien o day a ma khong xuat hien o day b
void cooakhongcoob(int a[],int n,int b[],int m){
    int i,j,dem;
    for(i=0;i<n;i++){
        dem=0;
        for(j=0;j<m;j++){
            if(a[i]==b[j]){
                dem++;
                break;
            }
        }
        if(dem==0){
            printf("%6d",a[i]);
        }
    }
}

// in ra nhung phan tu xuat hien o ca 2 day
void xoak(int a[], int &n, int k){
    if(k < 0){
        k = 0;
    }
    if(k >= n){
        k = n-1;
    }
    for(int i = k; i < n - 1; i++){
        a[i] = a[i+1];
    }
    --n;
}
void xoalapa(int a[],int &n){
    int i,k;
    for(i=0;i<n;i++){
        for(k=i+1;k<n;k++){
            if(a[i]==a[k]){
                if(k < 0){
                    k = 0;
                }
                if(k >= n){
                    k = n-1;
                }
                for(int i = k; i < n - 1; i++){
                    a[i] = a[i+1];
                }
                --n;
            }
        }
    }
}
void xuathiencaavab(int a[],int n,int b [],int m){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i]==b[j]){
                printf("%6d",a[i]);
                break;
            }
        }
    }
}
int main(){
    int a[max], n, b[max],m;

    nhapmanga(a,n);
/*
    // xap xep tang,gian dan
    printf("\nham sau khi xap xep tang: ");
    xeptangdan(a,n);
    xuatmang(a,n);
    printf("\nham sau khi xap xep giam: ");
    xepgiamdan(a,n);
    xuatmang(a,n);

    // so chia het cho 3 len dau va xuong cuoi
    printf("\nso chia het cho 3 len dau: ");
    chiahet3lendau(a,n);
    xuatmang(a,n);
    printf("\nso chia het cho 3 xuong cuoi: ");
    chiahet3xuongcuoi(a,n);
    xuatmang(a,n);

    // xap xep le tang, chan giam
    printf("\nxap xep so le tang dan: ");
    letangdan(a,n);
    xuatmang(a,n);
    printf("\nxap xep so chan giam dan: ");
    changiamdan(a,n);
    xuatmang(a,n);

    // xep so chia het cho 2 ma khong chia het cho 3 xuong cuoi day
    printf("\nxap xep so chia het cho 2 ma khong chia het cho 3 xuong cuoi: ");
    xapsepcodk(a,n);
    xuatmang(a,n);

    // so chan len dau tang dan
    printf("\nxep cac so chan len dau tang dan");
    chanlendau(a,n);
    xuatmang(a,n);

    // dao nguoc ham
    printf("\nsau khi dao nguoc ham:");
    daonguocmang(a,n);
    xuatmang(a,n);

    // xap xep 2 day so tang dan va in ra. sau do gep 2 day thanh 1 day tang dan roi in ra
    int c[n+m],f;
    nhapmangb(b,m);
    printf("\nmang a[] tang dan");
    xeptangdan(a,n);
    xuatmang(a,n);
    printf("\nmang b[] tang dan");
    xeptangdan(b,m);
    xuatmang(b,m);
    printf("\ngep 2 mang tang dan: ");
    gep2mangtangdan(a,n,b,m,c,f);
    xuatmang(c,f);

    // in ra cac phan tu xuat hien o day a ma khong xuat hien o day b
    nhapmangb(b,m);
    printf("co o a[] ma khong co o b[]: ");
    cooakhongcoob(a,n,b,m);

    // in ra nhung phan tu xuat hien o ca 2 day
    nhapmangb(b,m);*/
    printf("cac phan tu xuat hien o ca 2 day la: ");
    xoalapa(a,n);
    xuatmang(a,n);
}

