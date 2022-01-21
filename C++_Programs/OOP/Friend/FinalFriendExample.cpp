#include<iostream>

using namespace std;

class alpha1;

class alpha2
{
    public:

        void put_Data();
};

class alpha1
{
    int roll;

    int id;

    public:

        void get_data(void)
        {
            cout<<"Hello";
        }

        friend void alpha2 :: put_Data();
};

void alpha2 :: put_Data()
{
	alpha1 net;
	cout<<"PutBata"<<endl;
    net.get_data();
}


int main()
{
    alpha2 gamma;

    gamma.put_Data();

    return 0;
}
