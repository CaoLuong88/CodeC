#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
//s(n)=1/(1x2) + 1/(2x3) + ... +1/(nx(n+1))
float s16(int n)
{
if(n==1) return 0.5;
return s16(n-1) + (float)1/(n*(n+1));
}
int main()
{
int n;
FILE *f;
f=fopen("cau1.in","rt");
if(f==NULL)
{
printf("\nLoi mo tep");
exit(0);
}
fscanf(f,"%d", &n);
fclose(f);
if(n<=0||n>=100)
{
printf("\nLoi dinh dang");
exit(0);
}
f=fopen("cau1.out","wt");
fprintf(f,"\nGia tri cua bieu thuc la: %.2f ",s16(n));
fclose(f);
getch();
return 0;
}
