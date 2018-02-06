#include<stdio.h>
#include<conio.h>
int main()
{
int a[20];
int i,n,k,sum=0;
clrscr();

       printf("Enter size of array");
       scanf("%d",&n);

   printf("Enter k values to sum");
   scanf("%d",&k);

printf("Enter elements of array");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
sum=sum+a[i];
}

printf("Sum of k values are %d",sum);

getch();
}
