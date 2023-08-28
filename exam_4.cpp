#include <iostream>
#include <string.h>
using namespace std;

class add{
	public:
		int a=0;
		void set(int a)
		{
			cout<<"mumber function"<<endl;
			
		}
		 void set(int a,int b)
		{
			cout<<"addition of a and b is"<<a+b<<endl;
		}
		void set(int a,int b, int c)
		{
			cout<< "addition od a,b,c is "<<a+b+c<<endl;
		}
		
};

int main()
{
	add a;
	a.set(50);
	a.set(50,50);
	a.set(50,50,66);
	
}
