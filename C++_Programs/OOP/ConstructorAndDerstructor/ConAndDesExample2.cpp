using namespace std;

#include<iostream>

class maths									//Class Declaration(Encapsulation)
{
	private :								//Access Specifier

		int iNo1;				//Private : Characteristics
		int iNo2;				//Private : Characteristics
	
	public : 								//Access Specifier
		
		maths()					//Default Constructor 
		{
			this->iNo1 = 0;
			this->iNo2 = 0;
		}

		maths(int iValue1,int iValue2)		//Parameterised Constructor
		{
			
			this->iNo1 = iValue1;
			this->iNo2 = iValue2;
		}

		maths(maths& Ref)			//Copy Constructor
		{

			this->iNo1 = Ref.iNo1;
			this->iNo2 = Ref.iNo2;
		}
			
		~maths()				//Destructor
		{
		
			cout<<"Inside Destructor"<<"\n";
		}

		int Add()				//Behaviour
		{

			int iAns = 0;

			iAns = this->iNo1 + this->iNo2;
			
			return iAns;
		}
	
		int Sub()				//Behaviour
		{

			int iAns = 0;
			
			iAns = this->iNo1 - this->iNo2;

			return iAns;
		}
};


int main()
{
	
	cout<<"Inside Main"<<"\n";

	maths obj1;					//Call OfDefault Contructor
	maths obj2(20,5);				//Call Of Parameterised Contructor
	maths obj3(obj2);				//Call Of Copy Contructor

	int iRet = 0;

	iRet = obj1.Add();					//Behaviour Call
	cout<<"Addition of two numbers is :"<<iRet<<"\n";

	iRet = obj2.Add();					//Behaviour Call
	cout<<"Addition of two numbers is :"<<iRet<<"\n";

	iRet = obj1.Sub();					//Behaviour Call
	cout<<"Substraction of two numbers is :"<<iRet<<"\n";

	iRet = obj2.Sub();					//Behaviour Call
	cout<<"Substraction of two numbers is :"<<iRet<<"\n";

	iRet = obj3.Add();					//Behaviour Call
	cout<<"Addition of two numbers is :"<<iRet<<"\n";


	return 0;
	
}
