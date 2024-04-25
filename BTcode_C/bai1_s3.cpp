#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
//s(n)=1^3 + 2^3 + ... + n^3
long s3(int n)
{
if(n==1) return 1;
return s3(n-1) + n*n*n;
}
int main()
{
int n;
FILE *f;
f=fopen("in.txt","rt");
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
f=fopen("out.txt","wt");
fprintf(f,"\nS3 = %ld ",s3(n));
fclose(f);
getch();
return 0;
}
