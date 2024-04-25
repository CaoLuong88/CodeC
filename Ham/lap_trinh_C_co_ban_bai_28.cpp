#include<stdio.h>
#include<conio.h>

long uoclelonnhat(long n){      //tao ham tim uoc le lon nhat
    for(long i=n;i>=1;i--){
        if(n%i==0 && i%2!=0){
           return i;
        }
    }   
    return 0;
} 
int main(){
    //nhap gia tri co dieu kien
    long n;          
    do{
        printf("nhap 5 duong co nhieu nhat 5 chu so: "); scanf("%ld",&n);
    }while(n<=0||n>99999);

    printf("uoc le lon nhat %ld",uoclelonnhat(n));  //goi ham

}