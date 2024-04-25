#include<stdio.h>
void findMaxDigit(int num){
	int maxDigit=-1;
	int position=-1;
	int currentDigit;
	for(int i=0;i<3;i++){
		currentDigit=num%10; // lay chu so hien tai
		num/=10; // xoa chu so vua lay de xet chu so tiep theo
		if(currentDigit>maxDigit){
			maxDigit=currentDigit;
			position=i;
		}
	}
	printf("chu so lon nhat la:%d,nam o vi tri:",maxDigit);
	switch(position){
		case 0:
			printf("hang don vi");
			break;
			case 1:
			printf("hang chuc");
			break;
			case 2:
			printf("hang tram");
			break;
			default:
		
			printf("khon xac dinh");
			break;
	}
}
int main(){
	int n;
	printf("Nhap mot so nguyen gom ba chu so: ");
    scanf("%d", &n);

    if (n < 100 || n > 999) {
        printf("Vui long nhap mot so nguyen gom ba chu so.");
    } else {
        findMaxDigit(n);
    }

    return 0;
}
