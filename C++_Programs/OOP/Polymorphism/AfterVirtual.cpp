using namespace std;

#include<iostream>

class base
{
	public :
		int i;
		int j;
	
	void virtual fun()
	{
		cout<<"From Base fun"<<"\n";
	}
	
	void gun()
	{
		cout<<"From Base gun"<<"\n";
	}
};

class derived : public base
{
	public:
	int x;

	void fun()
	{
		cout<<"From Derived fun"<<"\n";
	}
	
	void gun()
	{
		cout<<"From Base Derived"<<"\n";
	}
};

int main()
{
	base* bp = NULL;     //8

	derived dobj;			//12

	bp = &dobj;		
	
	bp->fun();
	bp->gun();

	cout<<sizeof(base)<<"\n";
	cout<<sizeof(derived)<<"\n";
return 0;
}
