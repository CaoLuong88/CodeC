#include<stdio.h>
#include<string.h>
#define max 100

void viethoa(char a[max]){
    int i, k = strlen(a);
    if(a[0]>=91&&a[0]<=122){
        a[0] = a[0] - 32;
    }
    for(i=0;i<k;i++){
        if(a[i]==' '&&a[i+1]>=91&&a[i+1]<=122){
            a[i+1] = a[i+1] - 32;
        }
    }
}



int main(){
    char a[max];
    printf("nhap chuoi: "); gets(a);
    printf("chuoi da nhap la: "); puts(a);

    viethoa(a);
    printf("sau khi viet hoa:"); puts(a);
    

}