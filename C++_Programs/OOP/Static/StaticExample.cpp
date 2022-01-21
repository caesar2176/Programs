#include<iostream>

using  namespace std;

class Demo
{
    public:

        int i;
		int j;

	static int k;
          

        void fun()
        {
            cout<<this->i<<this->j;
	    cout<<k;
        }

	static int gun()
	{
		//cout<<this->i<<this->j;  //NA
		//cout<<i<<j;     //NA
		cout<<k;
	
		return k;
	}
};

int Demo :: k = 101;
Demo obj; 


int main()
{
    
	int ret = 0;

    cout<<obj.i<<endl;				//0 global object
	
    cout<<obj.j<<endl;				//0
	
    cout<<Demo::k<<endl;				//101

    cout<<obj.k<<endl;
	
    obj.fun();

	cout<<"\n";

    Demo::gun();

	cout<<"\n";

	ret = Demo::k;
	
	cout<<ret;

	cout<<"\n";
	

    return 0;
}




