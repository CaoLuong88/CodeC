#include<stdio.h>
#include<conio.h>
#define max 100

void nhapmang(int a[max][max],int &n,int &m){
    do{
        printf("nhap so hang"); scanf("%d",&n);
        printf("nhap do cot"); scanf("%d",&m);
    }while(n<0||n>100||m<0||m>100);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}

float tbcacmin(int a[max][max],int n,int m){
    int gtmin ,i,j,tong = 0;
    for(j=0;j<m;j++){
        gtmin = a[0][j];
        for(i=1;i<n;i++){
            if(a[i][j]<gtmin){
                gtmin = a[i][j];
            }
        }
        tong += gtmin;
    }
    float tbmin = (float)tong/m;
    return tbmin;
}



void cotmin(int a[max][max],int n,int m){
    int i,j,cotmin,tongcot[max];
    for(i=0;i<m;i++){
        tongcot[i]=0;
        for(j=0;j<n;j++){
            tongcot[i] += a[j][i];
        }
    }
    cotmin = tongcot[0];
    for(i=1;i<m;i++){
        if(cotmin>tongcot[i]){
            cotmin = tongcot[i];
        }
    }
    for(i=0;i<m;i++){
        if(cotmin==tongcot[i]){
            printf("\ncot %d co tong be nhat",i);
        }
    }
}

int main(){
    int a[max][max],n,m;
    nhapmang(a,n,m);

    printf("trung binh cac phan tu nho nhat tren moi cot%.2f",tbcacmin(a,n,m));

    cotmin(a,n,m);
}