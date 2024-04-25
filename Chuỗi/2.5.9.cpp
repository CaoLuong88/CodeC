#include<stdio.h>
#include<string.h>
#define max 50

void tachchuso(char a[max],char b[max]){
    int i,k = strlen(a);
    int j,n = 0;
    for(i=0;i<k;i++){
        if(a[i]>=48&&a[i]<=57){
            b[n] = a[i];
            n++;
        }
    }
    b[n]='\0';
    if(j==0){
        printf("trong chuoi khong co chu so");
    }else{
        puts(b);
    }
}



int main(){
    char a[max];
    char b[max],n;
    printf("\nNhap chuoi: ");
    gets(a);
    printf("chuoi da nhap la:");
    puts(a);

    printf("tach chu so ra khoi chuoi: ");
    tachchuso(a,b);


    
    return 0;
}