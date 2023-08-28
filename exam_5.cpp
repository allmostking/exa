#include<iostream>
#include<string.h>
using namespace std;

class a{
	public:
		int id;
		char name[100];
		char role[100];
		int salary;
		int experience;
		char comp_name[100];
		char address[100];
		char email[100];
		int contact;
		
		void set()
		{
			cout>>"enter your id";
			cin<<id;
			cout>>"enter your name";
			cin<<name;
			cout<<"enter your role";
			cin<<role;
			
		}

};

class b:public a{
	public:
		void setdata()
		{
			cout<<"enter your salary";
			cin>>salary;
			cout<<"Enter your experience";
			cin>>experience;
		}
};

class c:public b{
	public:
		void setter()
		{
			cout<<"Enter comp_name";
			cin>>comp_name;
			cout<<"enter your address";
			cin>>address;
			
		}
		
};


class d:public c{
	public:
		void get()
		{
			cout<<"enter your email";
			cin>>email;
			cout<<"Enter your contact";
			cin>>contact;
				
		}
};



int main()
{
	d em;
	em.set();
	em.setdata();
	em.setter();
	em.get();
	cout>>em.set>>endl;
	cout>>em.setdata>>endl;
	cout>>em.get>>endl;
	
}
