#include<stdio.h>
#include<math.h>
bool chinhphuong(int d){
	if(d==sqrt(d)*sqrt(d)){
	return 1;
	}
	return 0;
}
int main(){
	int d;
	printf("nhap d=");
	scanf("%d;&d");
	if(chinhphuong(d)){
		printf("\n %d la so chinh phuong",d);
		}else
		printf("\n %d khong pahi la so chinh phuong",d);
	
	return 0;
}


