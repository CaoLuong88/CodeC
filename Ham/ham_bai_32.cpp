#include<stdio.h>
#include<conio.h>
//in hinh chu nhat rong kich thuoc mxn
void hcn(int m, int n)
{
int i, j;
for(j=0; j<n; j++)
printf("*");
printf("\n");
for(i=1; i<m-1; i++)
{
for(j=0; j<n; j++)
if(j==0 || j==n-1)
printf("*");
else printf(" ");
printf("\n");
}
for(j=0; j<n; j++)
printf("*");
}
int main()
{
int m,n;
printf("Nhap chieu cao: "); scanf("%d",&m);
printf("Nhap chieu rong: "); scanf("%d",&n);
hcn(m,n);

}