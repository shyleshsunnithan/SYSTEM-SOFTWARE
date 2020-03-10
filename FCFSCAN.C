#include<conio.h>
#include<stdio.h>
int main()
{
 int i,j,sum=0,n;
 int ar[20],tm[20];
 int disk;
 printf("Enter number of location\t");
 scanf("%d",&n);
 printf("Enter position of head\t");
 scanf("%d",&disk);
 printf("Enter elements of disk queue\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&ar[i]);
 tm[i]=disk-ar[i];
 if(tm[i]<0)
 {
 tm[i]=ar[i]-disk;
 }
 disk=ar[i];
 sum=sum+tm[i];
 }
 /*for(i=0;i<n;i++)
 {
 printf("\n%d",tm[i]);
 }   */
 printf("\n Movement of total cylinders %d",sum);
 getch();
 return 0;
}
