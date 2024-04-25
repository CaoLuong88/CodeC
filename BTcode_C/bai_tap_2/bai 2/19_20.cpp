#include<stdio.h>
#include<stdlib.h>

int uocle(int n){
    for(int i=n/2;i>0;i--){
        if(n%i==0&&i%2!=0){
            return i;
        }
    }
    return 0;
}

int main(){
    int n;
    FILE *f;
    f=fopen("BAI2.IN","rt");
    if(f==NULL){
        printf("loi mo tep");
        exit(0);
    }
    fscanf(f,"%d",&n);
    fclose(f);
    if(n<=0||n>99999){
        printf("loi dinh dang du lieu");
        exit(0);
    }

    f=fopen("BAI2.out","wt");
    fprintf(f,"%d",uocle(n));
    fclose(f);

    return 0;
}