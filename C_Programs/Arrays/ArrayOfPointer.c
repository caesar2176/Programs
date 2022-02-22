#include <stdio.h>
 
const int MAX = 3;
 
int main ()
{

	int  var[] = {10, 100, 200};
	int iCount = 0;
	int *ptr[MAX];
 
	for( iCount = 0; iCount < MAX; iCount++) 
	{
		ptr[iCount] = &var[iCount];
	}
   
   	for( iCount = 0; iCount < MAX; iCount++) 
	{
      		printf("Value of var[%d] and Address of var[%d] = %d\n", iCount, *ptr[iCount],&var[iCount] );

   	}
   	printf("***************************************************\n");
	for( iCount = 0; iCount < 1; iCount++) 
	{
      		printf("Address of ptr[%d] = %d\n", iCount, &(*ptr[1]) );

   	}
   
   return 0;
}
