using namespace std;

#include<iostream>

class Demo
{
	public :
	

	Demo()
	{
		cout<<"Constructor Of Demo"<<endl;
	}
	~Demo()
	{
		cout<<"Constructor Of Demo"<<endl;
	}
	
};

class Hello : public Demo
{
	
	public :
	
	Hello()
	{
		cout<<"Constructor Of Hello"<<endl;
	}

	~Hello()
	{
		cout<<"Constructor Of Hello"<<endl;
	}


};

class A
{
	public :
	A()
	{
		cout<<"Constructor Of A "<<endl;
	}

	~A()
	{
		cout<<"Constructor Of A "<<endl;
	}

};

class B : public A
{
	public :
	
	B()
	{
		cout<<"Constructor Of B "<<endl;
	}

	~B()
	{
		cout<<"Constructor Of B "<<endl;
	}

};

class C : public B
{
	public :
	C()
	{
		cout<<"Constructor Of C "<<endl;
	}
	~C()
	{
		cout<<"Constructor Of C "<<endl;
	}

};

class X
{
	public :
	X()
	{
		cout<<"Constructor Of X "<<endl;
	}
	~X()
	{
		cout<<"Constructor Of X "<<endl;
	}

};

class Y
{
	public :

	
	Y()
	{
		cout<<"Constructor Of Y "<<endl;
	}
	~Y()
	{
		cout<<"Constructor Of Y "<<endl;
	}
};

class ABC : public Y, public X
{
	public :

		ABC()
	{
		cout<<"Constructor Of ABC "<<endl;
	}
	~ABC()
	{
		cout<<"Constructor Of ABC "<<endl;
	}
	


};

int main()
{
	Hello * hp = new Hello;
	C * cp = new C;
	ABC * p = new ABC;
	
	delete hp;
	
}
