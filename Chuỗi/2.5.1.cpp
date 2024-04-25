#include<stdio.h>
#include<string.h>
#define max 100


int main(){
    char s[max];
    printf("\nNhap chuoi: ");
    gets(s);
    printf("\nChuoi vua nhap la: "); puts(s);

    printf("\nchuoi co %d ky tu", strlen(s));
    
    return 0;
}