#include<stdio.h>
#include<conio.h>

void tonguocduong(long n){          //tao ham tinh tong cac uoc
    int tonguoc = 0;
    for(int i = 1; i<=n;i++){
        if(n%i==0){
            tonguoc += i;
            printf("\ncac uoc cua n bang: %d\n",i);
        }
    }
    printf("tong cac uoc duong la %d",tonguoc);
}

int main(){
    //nhap gia tri co dieu kien
    long n;          
    do{
        printf("nhap 5 duong co nhieu nhat 5 chu so: "); scanf("%d",&n);
    }while(n<=0||n>99999);

    tonguocduong(n);   //goiham

    getch();
    return 0;
}