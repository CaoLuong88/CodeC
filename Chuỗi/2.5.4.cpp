#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 50

void kiemtrac(char s[max],char c){
    int i,dem = 0, k = strlen(s);
    for(i=0;i<k;i++){
        if(s[i]==c){
            printf("s[%d]  ",i);
            dem++;
        }
    }
    if(dem==0)
    printf("ky tu %c khong co trong chuoi:",c);
}

int main(){
    char s[max], c;
    printf("nhap chuoi:"); gets(s);
    printf("chuoi da nhap:"); puts(s);

    printf("kiem tra phan tu co trong chuoi hay khong: "); 
    scanf("%c",&c);

    printf("vi tri phan tu %c trong chuoi:",c);
    kiemtrac(s,c);
}

    