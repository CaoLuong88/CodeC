#include<stdio.h>
#include<conio.h>
#include<math.h>

void pheptoan(int n){   //dinh nghia ham
    float s=0;
    for(int i=1;i<=n;i++){
       s += (float)1/pow(i,3);
    }
    printf("\ns=1+1/2^3+1/3^3+...+1/%d bang:%f^3",n,s);
}

int main(){
    int n;
    //nhap du lieu co dieu kien
    do{
        printf("\nnhap n (0<n<100):"); scanf("%d",&n);
        if(n>0&&n<100){
            break;
        }else{
            printf("\ngia tri n khong hop le");
        }
    }while(n<=0||n>=100);
    
    pheptoan(n);  // goi ham
    
    getch();
    return 0;
}