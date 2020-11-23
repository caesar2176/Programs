//Pattern1.c

/*
*****Output*****

* * * * * 
* * * *
* * *
* *
*

*/

				
				      	//////////////////////////////////////////////////////////
				       //						                                           // 	
				      //	Author    : Ashish Shinde		                        //
				     //		Date      : 23/11/2020			                       //	
				    //						
				   //
				  //
				 //
				///////////////////////////////////////////////////////////

# include<stdio.h>

int drawPattern();

int main()
{	
	int iRange = 0;

	printf("Enter any number to print pattern:""\n");
	scanf("%d",&iRange);

	drawPattern(iRange);

	return 0;
}

int drawPattern(int FiRange)
{
	int iRow = 0;
	
	int iCol = 0;
	for(iRow = 1;iRow <= FiRange ; iRow++)
	{
		for(iCol = FiRange; iCol >= iRow; iCol--)
		{
		
		printf("* ");

		}
		printf("\n");
		
	}
}
