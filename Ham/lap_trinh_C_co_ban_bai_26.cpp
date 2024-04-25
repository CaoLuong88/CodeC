#include<stdio.h>
#include<conio.h>

void chanle(long n){   //tao ham dem so chan le
    int sochan = 0;
    int sole = 0;
    while(n>0){
        if(n%2!=0){
            sole += 1;
            n = n/10;
        }else{
            sochan += 1;
            n = n/10;
        }
    }
    printf("\nco: %d chu so chan va %d chu so le",sochan,sole);
}

int main(){
    //nhap gia tri co dieu kien
    long n;          
    do{
        printf("nhap 5 duong co nhieu nhat 5 chu so: "); scanf("%d",&n);
    }while(n<=0||n>99999);

    chanle(n);    //goi ham

    getch();
    return 0;
}