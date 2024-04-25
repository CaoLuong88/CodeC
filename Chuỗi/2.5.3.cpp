#include<stdio.h>
#include<string.h>
#define max 50

int demxuathien(char a[max], char c){
    int i, dem = 0, k = strlen(a);
    for(i=0;i<k;i++){
        if(a[i]==c)
        dem++;
    }
    return dem;
}

int main(){
    char a[max], c;
    printf("nhap chuoi: "); gets(a);
    printf("chuoi da nhap: "); puts(a);

    printf("dem so lan xuat hien cua ky tu: "); scanf("%c",&c);

    printf("ky tu %c xuat hien %d lan:",c,demxuathien(a,c));
}