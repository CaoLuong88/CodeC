#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* 1*2*3*....*n */
long S1(int n){
    long s=1;
    for(int i=1;i<=n;i++){
        s*=i;
    }
    return s;
}

/* 1^2+2^2+3^2+...+n^2 */
long S2(int n){
    long s = 0;
    for(int i = 1;i<=n;i++){
        s += pow(i,2);
    }
    return s;
}

/* 1^3+2^3+3^3+...+n^3 */
long S3(int n){
    long s = 0;
    for(int i = 1;i<=n;i++){
        s += pow(i,3);
    }
    return s;
}

/* 1/1 + 1/2 + 1/3 +...+ 1/n */
float S4(int n){
    float s = 0;
    for(int i=1;i<=n;i++){
        s+= 1.0/i;
    }
    return s;
}

/* 1/2 + 1/4 + 1/6 +...+ 1/2*n */
float S5(int n){
    float s = 0;
    for(int i=1;i<=n;i++){
        s+= 1.0/(2*i);
    }
    return s;
}

/* 1 + 1/3 + 1/5 +...+ 1/2*n+1 */
float S6(int n){
    float s = 0;
    for(int i=0;i<=n;i++){
        s+= 1.0/(2*i+1);
    }
    return s;
}

/* 1 + 1/2^2 + 1/3^2 +...+ 1/n^2 */
float S7(int n){
    float s = 0;
    for(int i=1;i<=n;i++){
        s+= 1.0/pow(i,2);
    }
    return s;
}

/* 1*3*5*....*(2*n+1) */
long S8(int n){
    long s=1;
    for(int i=0;i<=n;i++){
        s*=2*i+1;
    }
    return s;
}

/* 1/2 + 2/3 + 3/4 +...+ n/n+1 */
float S9(int n){
    float s=0;
    for(int i=1;i<=n;i++){
        s+= (float)i/(i+1);
    }
    return s;
}

/* 2/1 + 3/2 + 4/3 +...+ n+1/n */
float S10(int n){
    float s=0;
    for(int i=1;i<=n;i++){
        s+= (float) (i+1)/i;
    }
    return s;
}

/* 1/2 + 3/4 + 5/6 +...+ (2*n+1)/(2*n+2) */
float S11(int n){
    float s=0;
    for(int i=0;i<=n;i++){
        s+= (float) (2*i+1)/(2*i+2) ;
    }
    return s;
}

/* 1 +(1+2)+...+(1+2+...n) */
long S12(int n){
    long s=0,s1=0;
    for(int i=1;i<=n;i++){
        s1+=i;
        s+=s1;
    }
    return s;
}

/* 1+1*2+...+1*2*...*n */
long S13(int n){
    long s=0, s1=1;
    for(int i=1;i<=n;i++){
        s1*=i;
        s+=s1;
    }
    return s;
}

/* 1 + 1/1+2 +...+ 1/1+2+..._n */
float S14(int n){
    float s=0, s1=0;
    for(int i=1;i<=n;i++){
        s1+=i;
        s+=(float)1/s1;
    }
    return s;
}

/* 1*2+2*3+...+n*(n+1) */
long S15(int n){
    long s = 0, s1 = 1;
    for(int i=1;i<=n;i++){
        s1=i*(i+1);
        s+=s1;
    }
    return s;
}

/* 1/1*2 + 1/2*3 +...+ 1/n*(n+1) */
float S16(int n){
    float s=0;
    for(int i=1;i<=n;i++){
        s+=(float)1/(i*(i+1));
    }
    return s;
}
 
float S18(int n){
    float s=0;
    for(int i=1;i<=n;i++){
        s=sqrt(2+s);
    }
    return s;
}

float S19(int n){
    float s=0;
    for(int i=1;i<=n;i++){
        s=sqrt(i+s);
    }   
    return s;
}


int main(){
    int n;
    FILE *f;
    f = fopen("IN.DAT","rt");
    if(f==NULL){
        printf("\n Loi dinh dan tep");
        exit(0);
    }
    fscanf(f,"%d",&n);
    fclose(f);
    if(n<=0||n>100){
        printf("loi dinh dang du lieu");
        return 0;
    }

    fopen("OUT.DAT","wt");
    fprintf(f,"%f",S19(n));
    fclose(f);

    printf("%f",S19(n));
    
    return 0;
}