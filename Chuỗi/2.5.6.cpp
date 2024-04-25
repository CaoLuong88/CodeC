#include<stdio.h>
#include<string.h>
#define max 100

bool doixung(char a[max]){
    int k = strlen(a);
    for(int i=0, j=k-1; i<=k/2; i++, j--){
        if(a[i]!=a[j])
        return false;
    }
    return true;    
}



int main(){
    char a[max];
    printf("nhap chuoi a: "); gets(a);
    printf("chuoi da nhap la: "); puts(a);

    if(doixung(a)){
        printf("\nchuoi da nhap la doi xung:");
    }else{
        printf("\nchuoi da nhap khong phai doi xung");
    }
    

}