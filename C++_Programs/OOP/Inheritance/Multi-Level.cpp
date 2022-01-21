using namespace std;

# include<iostream>

class maths
{
	public :

		int iNo1 = 10;
		int iNo2 = 10;

	int add(int iValue, int iValue2)
	{

		return iValue + iValue2;

	}

	int sub(int iValue, int iValue2)
	{

		return iValue - iValue2;

	}
};

class calculator : public maths
{
	public :

		int iValue;

	int mult(int iValue, int iValue2)
	{

		return iValue * iValue2;

	}

};

class PC : public calculator
{
	
};

int main()
{
	maths mobj;

	calculator cobj;
	
	PC OBJ;
	
	cout<<sizeof(mobj);
	
	cout<<sizeof(cobj);
	
	cout<<sizeof(OBJ);

	int iret = 0;

	iret = cobj.add(10,10);
	cout<<"Addition from cobj :"<<iret<<endl;

	iret = mobj.add(10,10);
	cout<<"Addition from mobj :"<<iret<<endl;

	iret = cobj.mult(10,10);
	cout<<"Multiplication :"<<iret<<endl;
	
	
	return 0 ;
}
