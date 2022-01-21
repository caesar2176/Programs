using namespace std;

#include<iostream>

class base
{
	public :
		int i;
		int j;
	
	void fun()
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
		cout<<"From Derived : Fun"<<"\n";
	}
	
	void gun()
	{
		cout<<"From Derived : Gun"<<"\n";
	}
};

int main()
{
	base* bp = NULL;			//Pointer Type	: Pointer Type Mhanaje Aapan jya class cha pointer Banau To Tyacha Pointer Type jhala : Base Class
	derived dobj;

	bp->fun();
	bp->gun();

	bp = &dobj;				//bp Ha Pointer base class cha pointer type hota pan apan tya madhe Derived class chya object cha mhanajech dobj 
							//Address store karatoy yacha arth ata bp madhe derived class chya object cha address ahe mhnaje ata pasun bp
							//dobj la point karel 
	bp->fun();				//bp dobj la point karat asala tari pointer type mule to Base Class madhale fun() call karel
	bp->gun();				//Ha problem solve karanyasathi aapn virtual hi concept use karato.
	
	cout<<sizeof(bp);
	cout<<sizeof(dobj);
	
return 0;
}
