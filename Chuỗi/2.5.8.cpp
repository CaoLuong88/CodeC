#include<stdio.h>
#include<string.h>
#define max 100

void xenkehoathuong(char a[]){
    strlwr(a);
    int k=strlen(a);
    for(int i=0;i<k;i=i+2)
        if(a[i]>=97 && a[i]<=122)
            a[i]=a[i]-32;
}



int main(){
    char a[max];
    printf("\nNhap chuoi: ");
    gets(a);
    xenkehoathuong(a);
    printf("\nxen ke hoa thuong %s", a);

    return 0;
}