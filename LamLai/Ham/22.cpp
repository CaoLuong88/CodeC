#include<stdio.h>
#include<conio.h>

void hamtinh(int n){    //dinh nghia ham
    int s=0,y=0;
    for(int i=1;i<=n;i++){
        y += i;
        s += y;
    }
    printf("1+(1+2)+(1+2+3)+...+(1+2+3+..+n) = %d",s);
}

int main(){
    int n;
    //nhap du lieu co dieu kien
    do{
        printf("\nnhap n (n>0):"); scanf("%d",&n);
        if(n>0){
            
            
        }else{
            printf("\ngia tri n khong hop le");
        }
    }while(n<=0);
    hamtinh(n); //goi ham da dinh nghia

    getch();
    return 0;
}
