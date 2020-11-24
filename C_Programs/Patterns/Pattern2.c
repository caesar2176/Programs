#include <stdio.h>


void display();

int main()
{
	int iRange = 0;

	printf("Enter any Number to print pattern on the console :""\n");
	scanf("%d",&iRange);

	display(iRange);
	
	return 0;	
}

void display(int iCount)
{	
	int iRow=0;
	int iLimit=1;

	printf("\n");
	
	continu:

	for(iRow=1; iRow <= iCount;iRow++)
	{
		
		printf("*""\t");

	}
	printf("\n");

	iLimit++;
	if(iLimit<=5)
	{
		goto continu;
	}
	
}
