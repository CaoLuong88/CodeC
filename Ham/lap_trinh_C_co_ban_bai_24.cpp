#include<stdio.h>
#include<conio.h>

void fibonaci(int n){          // nhap ham tinh in ra day so fibonaci
    int f0 = 0; int f1 = 1; int fn;
    for(int i=0;i<=n;i++){
        if(i<=1){
            fn = i;
        }else{
            fn = f1 + f0;
            f0 = f1;
            f1 = fn;
        }
        printf("F%d = %d\n",i,fn);
    }
   
}

int main(){
    //nhap n co dieu kien
    int n;
    do{
        printf("nhap n (n>0):"); scanf("%d",&n);
    }while(n<=0);

    fibonaci(n); //goi ham 

    getch();
    return 0;
}