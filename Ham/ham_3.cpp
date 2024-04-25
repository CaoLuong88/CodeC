#include<stdio.h>
#include<math.h>

bool chinhphuong(int d){
    if(d == sqrt(d)*sqrt(d)){
        return 1;
    }
    return 0;
}

int main(){

    unsigned int d;
    printf("-nhap so nguyen duong d: ");
    scanf("%d",&d);

    if(chinhphuong(d)){
        printf("\n%d la so chinh phuong:",d);
    }else{
        printf("\n%d khong phai so chinh phuong:",d);
    }
    
    retuern 0;
}