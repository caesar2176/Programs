#include <stdio.h>

void main()
{
	int iaFirstM[2][3],iaSecondM[2][3],iAnsM[2][3],iRowCount=0,iColCount=0;
	
	printf("\nENTER VALUES FOR FIRST MATRIX :\n");
	printf("************************************\n");
	for(iRowCount=1;iRowCount<=2;iRowCount++)
	{
		for(iColCount=1;iColCount<=3;iColCount++)
		{
			scanf("%d",&iaFirstM[iRowCount][iColCount]);
		}
	}
	printf("************************************\n");
	printf("\nENTER VALUES FOR SECOND MATRIX :\n");
	for(iRowCount=1;iRowCount<=2;iRowCount++)
	{
		for(iColCount=1;iColCount<=3;iColCount++)
		{
			scanf("%d",&iaSecondM[iRowCount][iColCount]);
		}
	}

	for(iRowCount=1;iRowCount<=2;iRowCount++)
	{
		for(iColCount=1;iColCount<=3;iColCount++)
		{		
			
			iAnsM[iRowCount][iColCount]=iaFirstM[iRowCount][iColCount]+iaSecondM[iRowCount][iColCount];

		}

	}
	printf("************************************\n");

	printf("\nAddition Of Two Matrix is:\n\n");
	for(iRowCount=1;iRowCount<=2;iRowCount++)
        {
		for(iColCount=1;iColCount<=3;iColCount++)
		{
			printf("\t%d",iAnsM[iRowCount][iColCount]);
		}
	printf("\n");
	}
	printf("\n\n");
	printf("***********End of Program***********\n\n");
}
