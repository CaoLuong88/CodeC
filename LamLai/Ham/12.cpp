#include<stdio.h>
#include<math.h>
int main(){
	int ngay,thang,nam;
	printf("nhap ngay:");scanf("%d",&ngay);
	printf("nhap thang:");scanf("%d",&thang);
	printf("nhap nam:");scanf("%d",&nam);
	switch(thang){
		case 1: case 3: case 5: case 7: case 8: case 10 : case 12:
			if(ngay>0 && ngay<=31){
				printf(" \n ngay %d thang %d nam %d: hop le",ngay ,thang, nam);
			}else{
				printf(" \n ngay %d thang %d nam %d: khong ho le",ngay ,thang, nam);
			}
			break;
		case 4: case 6: case 9: case 11: 
			if(ngay>0 && ngay<=30){
				printf(" \n ngay %d thang %d nam %d: hop le",ngay ,thang, nam);
			}else{
				printf(" \n ngay %d thang %d nam %d: khong ho le",ngay ,thang, nam);
			}
			break;
			case 2: 
			if( nam%400==0||(nam%4==0)&&(nam%100!=0)){
			
			if(ngay>0 && ngay<=29){ // nam nhuan
				printf(" \n ngay %d thang %d nam %d: hop le",ngay ,thang, nam);
			}else{
				printf(" \n ngay %d thang %d nam %d: khong ho le",ngay ,thang, nam);
			}
			
			} else{ // nam khong nhuan
				
			if(ngay>0 && ngay<=28){
				printf(" \n ngay %d thang %d nam %d: hop le",ngay ,thang, nam);
			}else{
				printf(" \n ngay %d thang %d nam %d: khong ho le",ngay ,thang, nam);
			}
			}
		break;
		default:
			printf("thang  ko hop le");
	
	}
}
