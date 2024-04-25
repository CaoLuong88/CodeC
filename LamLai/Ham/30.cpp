#include<stdio.h>
bool SoNguyenTo(int a){
	if(a<2){
	return 0;
}
for(int i=2;i<=a/2;i++){
	if(a%i==0){
		return 0;
	}
}
return 1;
}
int DemSoNT(int b){
	int chuso,dem=0;
	while(b>0){
		chuso=b%10;
		b=b/10;
		if(SoNguyenTo(chuso)){
		
		dem++;
		}
	}
	return dem;
}
int main(){
	int s;
	do{
		printf("nhap so (0<n<10000)=");scanf("%d",&s);
		
	}while(s<=0);
	printf("so %d co %d chu so ng to",s,DemSoNT(s));
}

