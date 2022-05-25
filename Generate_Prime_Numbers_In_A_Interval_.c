
#include <stdio.h>
int main() 
{
   int l,h,i,f;
   scanf("%d%d",&l,&h);
   while (l<h) 
   {
      f=0;
      if(l<=1)
      {
         l++;
      }
      for (i=2; i<=l/2;i++)
      {
        if (l%i==0) 
         {
            f=1;
            break;
         }
      }
     if (f==0)
         printf("%d
", l);
      l++;
   }
   return 0;
}