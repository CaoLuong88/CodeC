#include<stdio.h>
#include<conio.h>

void xapxep(int n){
    int a,b,c,luu=0;

    a = n/100;       
    b = (n%100)/10;   
    c = n%10;        
    
    if (a>b){ 
        luu=a;
        a=b;
        b=luu;
    }
    if (b>c){
        luu=b;
        b=c;
        c=luu;
    }
    if (a>b){
        luu=a;
        a=b;
        b=luu;
    }
    printf("cac chu so xep lai theo thu tu tang da: %d%d%d",a,b,c);
}

int main(){
    
    int n;
    printf("nhap so nguyen n gom 3 chu so:"); scanf("%d",&n);
    
    xapxep(n);
    
}