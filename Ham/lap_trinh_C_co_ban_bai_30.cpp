#include<conio.h>
#include<stdio.h>

bool songuyento(int n){
    if(n<2){
        return 1;
    } 
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 1;
        } 
    }
    return 0;
}

int demsont(int n){
    int chuso, dem=0;
    while(n>0){
        chuso=n%10;
        n=n/10;
        if(songuyento(chuso)){
            dem++;
        }
    }
    return dem;
}
int main(){
    int n;
    do{
        printf("Nhap so nguyen (0<n<10000): ");
        scanf("%d", &n);
    }while(n<=0 || n>=10000);
    printf("\nSo %d co %d chu so nguyen to", n, demsont(n));

    
}