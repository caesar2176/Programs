using namespace std;

#include<iostream>
class Demo;
	
class Hello
{
	public :
		void gun();
};

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
				i = 10;
				j = 20;
				k = 30;
			}
		
		friend void Hello :: gun();		
		
};



void Hello :: gun()
{
	Demo obj;
	cout<<obj.i;
	cout<<obj.j;
	cout<<obj.k;
}



int main()
{
	Hello hobj;
	hobj.gun();
	
	return 0;
}		


