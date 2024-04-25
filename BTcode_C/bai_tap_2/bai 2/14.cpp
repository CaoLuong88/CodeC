#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>



int main(){
    int n;
    FILE *f;
    f = fopen("BAI2.IN","rt");
    if(f==NULL){
        printf("loi dinh dang tep");
        exit(0);
    }
    fscanf(f,"%d",&n);
    fclose(f);
    if(n<=0||n>99999){
        printf("loi dinh dang du lieu");
        return 0;
    }

    chusokhac(n);

    return 0;

}