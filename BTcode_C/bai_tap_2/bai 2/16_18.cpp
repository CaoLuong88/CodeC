#include<stdio.h>
#include<stdlib.h>
#include<math.h>

bool toanle(int n){
    int du;
    while(n>0){
        du = n%10;
        if(du%2==0){
            return 0;
        }
        n/=10;
    }
    return 1;
}

bool toanchan(int n){
    int du;
    while(n>0){
        du = n%10;
        if(du%2!=0){
            return 0;
        }
        n/=10;
    }
    return 1;
}

bool KTSNT(int n){
    if(n<2){
        return  0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
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
        return 0;
    }

    if(KTSNT(n)){
        printf("\n la so nguyen to");
    }else{
        printf("\n khong phai so nguyen to");
    }

    return 0;
}