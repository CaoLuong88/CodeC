#include<stdio.h>
#include<conio.h>

void pheptoan(int n){   //dinh nghia ham
    float s=0;
    for(int i=1;i<=n;i++){
       s += (float)1/i;
    }
    printf("\ns=1+1/2+1/3+...+1/%d bang:%f",n,s);
}

int main(){
    int n;
    //nhap du lieu co dieu kien
    do{
        printf("\nnhap n (n>0):"); scanf("%d",&n);
        if(n>0){
            break;
        }else{
            printf("\ngia tri n khong hop le");
        }
    }while(n<=0);
    pheptoan(n);  // goi ham
    
    getch();
    return 0;
}