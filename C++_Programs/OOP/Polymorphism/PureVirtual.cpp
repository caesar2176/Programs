using namespace std;

#include<iostream>

class Base
{
    public:
        int i,j;					//Characteristics
        Base()						//Default Constructor
        {
            i = 11;
            j = 0;   
        }
   
	
	void fun()				//1000				Defination
        {
            cout<<"Base fun\n";
        }

	virtual void gun() = 0;						//No Address				 
    
    
};

class Derived : public Base					//Single level inheritance
{
    public:
    int x;							//Characteristics
    Derived()						//Default Constructor
    {
        i = 21;
    }
	void gun()							//2000
	{
		cout<<"Derived Gun";
	}

	void sun()
	{
		cout<<"Derived Sun";
	}
    
};

int main()
{

	//Base bobj;                                       //Error
    Base *bp = NULL;
    Derived dobj;

	bp= &dobj;

	bp -> fun();
	bp -> gun();
	bp -> sun();
	dobj.sun();
	

    return 0;
}
