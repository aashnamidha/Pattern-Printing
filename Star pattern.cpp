#include<stdio.h>
main()
{
 int n,a,b,c;
 printf("Enter no.of rows: ");
 scanf("%d",&n);
 c=n;
 
 for(a=1;a<=n;a++)
 {
  for(b=1;b<=c;b++)
  printf(" ");
  c--;
  for(b=1;b<=2*a-1;b++)
  printf("*");
  
  printf("\n");
 }
 return 0;
}
