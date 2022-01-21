using namespace std;

#include<iostream>

class Base
{
    public:
        int i,j;					//Characteristics

    private:

    virtual void fun()
	{
		cout<<"Base Destructor"<<endl;
	}
    
        
    friend int main();
       
};

class Derived : public Base					//Single level inheritance
{
    public:
    int x,y;							//Characteristics

    void fun()
	{
		cout<<"Derived fun"<<endl;
	}

    
    
};

int main()
{
   
   Base* bp = new Derived;

   bp ->fun();
    return 0;
}
