#include<stdio.h>
#include<math.h>

int main(){
    // khai bao bien va nhap gia tri ngay thang
    int ngay,thang,nam;
    printf("\n-nhap ngay: "); scanf("%d",&ngay);
    printf("\n-nhap thang: "); scanf("%d",&thang);
    printf("\n-nhap nam: "); scanf("%d",&nam);
    

    switch(thang){   
    
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:     // cac thang co 31 ngay
        if ((ngay>0)&&(ngay<=31)){         //ham if de xet so ngay trong thang
           printf("\n-ngay %d thang %d nam %d: hop le",ngay,thang,nam);    
        }else{
            printf("\n-ngay %d thang %d nam %d: khong hop le",ngay,thang,nam);
        } break;

        case 4: case 6: case 9: case 11:        //cac thang co 30 ngay
        if ((ngay>0)&&(ngay<=30)){     //ham if de xet so ngay trong thang
           printf("\n-ngay %d thang %d nam %d: hop le",ngay,thang,nam);
        }else{
            printf("\n-ngay %d thang %d nam %d: khong hop le",ngay,thang,nam);
        } break;

        case 2:      // thang 2 nam nhuan co 29 ngay. nam khong nhuan co 28 ngay
        if (nam%400==0 || (nam%4==0)&&(nam%100!=0)){      // dieu kien de tinh nam nhuan
           if ((ngay>0)&&(ngay<=29)){      // neu nam nhuan thi if xet thang 2 29 ngay
              printf("\n-ngay %d thang %d nam %d: hop le",ngay,thang,nam);
           }else{
              printf("\n-ngay %d thang %d nam %d: khong hop le",ngay,thang,nam);
           }

        }else{          // neu khong nhuan thi xet thang 2 28 ngay
            if ((ngay>0)&&(ngay<=28)){
               printf("\n-ngay %d thang %d nam %d: hop le",ngay,thang,nam);
            }else{
                 printf("\n-ngay %d thang %d nam %d: khong hop le",ngay,thang,nam);
            }
        }break;
        
        default:
        printf("thang khong hop le (tu 1 den 12)");

    }
    return 0;
}