#include<stdio.h>
void chanle(long n){
	int sochan=0;
	int sole=0;
	while(n>0){
		if(n%2!=0){	
		sole+=1;
		n=n/10;
	}else {
		sochan+=1;
		n/=10;
	}
}
	printf("so chan =%d,so le=%d",sochan,sole);
	
}int main(){
	int n;
	do{
		printf("nhap n=");scanf("%d",&n);

		
	}while(n<=0||n>99999);
	chanle(n);
}
