# include<stdio.h>

int ArithmaticOperations();

int main()
{	
	int ivalue1 = 0;
	int ivalue2 = 0;
	int iResult = 0;

	printf("Please enter first operand :""\n");
	scanf("%d",&ivalue1);

	printf("Please enter second operand :""\n");
	scanf("%d",&ivalue2);
	


	ArithmaticOperations(ivalue1,ivalue2);

	//printf("Addition of these two numbers is : %d""\n",iResult);

	return 0;
}

int ArithmaticOperations(int Fivalue1,int Fivalue2)
{
	int FiResult = 0;
	char Coperator = '\0';
	
	printf("Which operation you want to do :(+,-,*,/)""\n");
	scanf("%s",&Coperator);

	if(Coperator == '+')
	{

		FiResult = Fivalue1 + Fivalue2;
		printf("Addition of these two numbers is : %d""\n",FiResult);
	}

	else if(Coperator == '-')
	{
	
		FiResult = Fivalue1 - Fivalue2;
		printf("Substractions of these two numbers is : %d""\n",FiResult);
	}

	else if(Coperator == '*')
	{

		FiResult = Fivalue1 * Fivalue2;
		printf("Multiplication of these two numbers is : %d""\n",FiResult);
	}

	else if(Coperator == '/')
	{

		FiResult = Fivalue1 / Fivalue2;
		printf("Division of these two numbers is : %d""\n",FiResult);	
	
	}
	else
	{
		printf("Plese Enter Valid Operator..(+,-,*,/)""\n");
	}
}
