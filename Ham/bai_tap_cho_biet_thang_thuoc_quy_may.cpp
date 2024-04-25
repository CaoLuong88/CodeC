#include<stdio.h>
#include<conio.h>

int main(){

    //khai bao bien va nhap du lieu
    int a;
    printf("nhap thang (tu 1 den 12):"); scanf("%d",&a);  


    switch (a){         
        case 1: case 2: case 3:      //quy 1 gom thang 1,2,3
           printf("\n-thang %d thuoc quy 1.",a);
        break;

        case 4: case 5: case 6:      //quy 2 gom thang 4,5,6
            printf("\n-thang %d thuoc quy 2.",a);
        break;

        case 7: case 8: case 9:      //quy 3 gom thang 7,8,6
            printf("\n-thang %d thuoc quy 3.",a);
        break;

        case 10: case 11: case 12:   //quy 4 gom thang 7,8,9
            printf("\n-thang %d thuoc quy 4.",a);
        break;

        default: printf("%d khong phai la 1 thang.",a);
    }
    getch();
    return 0;
}