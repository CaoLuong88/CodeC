#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE*f;
	f=fopen("bai088.txt","r");
	if(f==NULL){
		printf("loi tao hoac mo file");
		exit(1);}
		int n;
		fscanf(f,"%d",&n);
		printf("\ngia tri cua n: %d",n);
		fclose(f);
		return 0;
	
}
