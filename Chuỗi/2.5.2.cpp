#include<stdio.h>
#include<string.h>
#define max 50

int khoangtrang(char a[max]){
    int i, dem = 0, k = strlen(a);
    for(i = 0;i<k;i++){
        if(a[i]==' ')
        dem++;
    }
    return dem;
}

int main(){
    char a[max];
    printf("nhap chuoi: ");
    gets(a);
    printf("chuoi da nhap la: "); puts(a);

    printf("\nchuoi ky tu co %d khoang trang:",khoangtrang(a));

    return 0;
}