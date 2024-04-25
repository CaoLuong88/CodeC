#include <stdio.h>
#include <conio.h>
//doi so o he thap phan sang he nhi phan
long doi(int n)
{
int sodu, hang=1;
long somoi=0;
while (n>0)
{
sodu = n%2;
somoi = hang*sodu + somoi;
n = n/2;
hang = hang *10;
}
return somoi;
}
int main()
{
int n;
do
{
printf("Nhap so nguyen (0<n<100000): ");
scanf("%d", &n);
}while(n<=0 || n>=100000);
printf("\nSo nhi phan cua %d la: %ld", n, doi(n));

}