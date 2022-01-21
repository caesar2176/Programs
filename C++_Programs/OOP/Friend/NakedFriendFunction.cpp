using namespace std;

#include<iostream>

class Demo
{
	public :
			int i;
	
	private : 
			int j;
	
	protected :
			int k;

	public :
			Demo()
			{
				i = 0;
				j = 0;
				k = 0;
			}
		
		friend void fun();						//Declaration Of Friend Fuction : Fun Is A Naked Function
		friend void Hello :: gun();		//Declaration Of Friend Fuction : gun is a Member Function Of A Hello Class
		
};

class Hello : public Demo
{
	public :
		void gun();				
};

void Hello :: gun()
{
	Demo obj;
	cout<<obj.i;				
	cout<<obj.j;		//Accessing Non Public Members of A Demo Class
	cout<<obj.k;		//Accessing Non Public Members of A Demo Class
}

void fun()				//Naked Function
{
	Demo obj;
	cout<<obj.i;
	cout<<obj.j;			//Accessing Non Public Members of A Demo Class
	cout<<obj.k;
}

int main()
{
	Hello hobj;
	hobj.gun();
	fun();
	
	return 0;
}
