#include<stdio.h>
#include<conio.h>

void solonnhat(int n){
    int a,b,c,luu=0;
    
    a = n/100;       
    b = (n%100)/10;   
    c = n%10;        
    
    if (a<b){ 
        luu=a;
        a=b;
        b=luu;
    }
    if (b<c){
        luu=b;
        b=c;
        c=luu;
    }
    if (a<b){
        luu=a;
        a=b;
        b=luu;
    }
    printf("chu so co gia tri lon nhat la: %d",a);
}

int main(){
    
    int n;
    printf("nhap so nguyen n gom 3 chu so:"); scanf("%d",&n);
    solonnhat(n);
    
}