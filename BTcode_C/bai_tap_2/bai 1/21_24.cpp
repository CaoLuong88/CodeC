#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float f1(float x,float n){
    return pow(x,n);
}

float f2(float x,float n){
    float i,f;
    for(i=1;i<=n;i++){
        f+=pow(x,i);
    }
    return f;
}

float f3(float x, float n){
    int i,f = 0 ;
    for(i=0;i<n;i++){
        f+=pow(x,(2*n+1));
    }
    return f;
}

int ucln(int x, int n){\
    if(x==0||n==0){
        return x+n;
    }
    while (x!=n){
        if (x>n){
            x-=n;
        }else{
            n-=x;
        }
    }
    return x;
}

int bcnn(int x,int n){
    return (x*n)/ucln(x,n);
}


int main(){
    float x,n;
    FILE *f;
    f = fopen("IN.DAT","rt");
    if(f==NULL){
        printf("/nloi mo tep");
        exit(0);
    }
    fscanf(f,"%f %f",&x,&n);
    fclose(f);

    f = fopen("OUT.DAT","wt");
    fprintf(f,"%d",bcnn(x,n));
    fclose(f);

    printf("%d",bcnn(x,n));
    return 0;
}
       