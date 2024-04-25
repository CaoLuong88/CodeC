#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//s18(n)
float s18(int n)
{
if(n==1) return sqrt(2);
return sqrt(2+s18(n-1));
}
int main()
{
int n;
FILE *f;
f=fopen("Cau1.dat","rt");
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
getch();
return 0;
}
f=fopen("cau1.dat","wt");
fprintf(f,"\nS18 = %.2f ",s18(n));
fclose(f);
getch();
return 0;
}
