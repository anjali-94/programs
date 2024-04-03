#include <stdio.h>

int main()
{
   int n,i,j,prime;
   int arr[100];
   printf("Enter the limit of an array: ");
   scanf("%d", &n);
   printf("Enter the Array: ");
   for (i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }

   printf("prime number: ");
   for (i = 0; i < n; i++)
   {
      prime = 0;
      for (j = 2; j < arr[i]; j++)
      {
         if (arr[i] % j == 0)
         {
            prime = 1;
            break;
            
         }
      }
      if (prime==0) {
         printf("%d ", arr[i]);
         }
   }
   return 0;
}