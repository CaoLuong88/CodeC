#include<stdio.h>
#include<string.h>
#define max 50

int main(){
    char a[max];
    printf("nhap chuoi: "); gets(a);
    printf("chuoi da nhap la:"); puts(a);

    printf("dao nguoc chuoi da nhap:");
    strrev(a);
    puts(a);
}