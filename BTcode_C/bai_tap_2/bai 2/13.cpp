#include<stdio.h>
#include<stdlib.h>

// vi tri lon nhat cua n 
void vitrilon(int n){
    int du, x=0, i=0, n2=n;
    while(n!=0){
        du = n%10;
        if(du>x){
            x=du;
        }
        i++;
        n/=10;
    }

    FILE *f;
    f=fopen("BAI2.OUT","wt");
    while(n2!=0){
        du = n2%10;
        if(x==du){
            fprintf(f,"%6d",i);
        }
        i--;
        n2/=10;
    }
    fclose(f);
}


int main(){
    int n;
    FILE *f;
    f = fopen("BAI2.IN","rt");
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
    
    vitrilon(n);

    return 0;
}