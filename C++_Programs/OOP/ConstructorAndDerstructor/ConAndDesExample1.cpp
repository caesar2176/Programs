#include<iostream>

using namespace std;

class Demo
{
	public :
		int i;					//Access Specifier
		int j;			      	  	//Characteristics

	Demo()						//Default Constructor
	{
		cout<<"Inside Constructor\n";
	}

	Demo(int i,int j)					//Parameterised Constructor
	{
		cout<<i+j<<"\n";
		cout<<"Inside Parameterised Constructor\n";
	}

	~Demo()						//Distructor
	{
		cout<<"Inside Distructor\n";
	
	}
	
	void Linus()					//Behaviour
	{
		cout<<"Inside Linus\n";
	}

	void LinusInfosystem()				//Behaviour
	{
		cout<<"Inside LinusInfosystem\n";
	}	

};							//End Of Demo Class
	

int main()
{

	cout<<"Inside Main\n";

	Demo Obj;
	cout<<"****"<<"\n";

	Demo Obj1();					//Default Contructor
	Demo Obj2(11,10);					//Parameterised Constructor

	Obj.Linus();					//Behaviour Call
	Obj.LinusInfosystem();				//Behaviour Call

	cout<<Obj2.i<<"\n";					//Accessing The Characteristics
	cout<<Obj1.i<<"\n";		//This line will generate error.....Think about it
	
	
	return 0;					//Distructors Of both the Objects gets called
}
