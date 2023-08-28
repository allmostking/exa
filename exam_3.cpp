#include<iostream>
#include<string.h>
using namespace std;

class Hotel{
	public:
		int id;
		int staff_size;
		int room_size;
		int establish_year;
		int rating_type;
		char name[100];
		char type[20];
		char address[100];
		char website[100];

        public:
		void set(int id,int staff_size,int room_size,int establish_year,int rating_type , char name[] , char type[] , char address[],char website[])
		{
			cout<<"enter id:";
			cin>>this-> id =id;
			cout<<"enter staff size:";
		   	cin>>this->staff_size=staff_size;
			cout<<"enter room size :";
			cin>>this->room_size=room_size;
			cout<<"Enter establish year :";
			cin>>this->establish_year=establish_year;
			cout<<"Enter rating type :";
			cin>>this->rating_type=rating_type;
			cout<<"Enter name :"
			cin>>strcpy(this->name,name);
			cout<<"Enter type :"
			cin>>strcpy(this->type,type);
			cout<<"Enter address :"
			cin>>strcpy(this->address,address);
			cout<<"Enter website :"
			cin>>strcpy(this->website,website);

		}
		void get()
		{
			cout<<"Id :"<<id;
			cout<<"Staff sizze :"<<staff_size;
			cout<<"Room size :"<<room_size;
			cout<<"Establish year :"<<Establish_year;
			cout<<"Rating type :"<<Rating_type;
			cout<<"Name :"<<name;
			cout<<"Type :"<<type;
			cout<<"Address :"<<address;
			cout<<"Website:"<<website;
		}

};
int main()
{
	Hotel h;
	h.set(1,500,200,1993,5,"taj hotel","Veg & Non-veg","mumbai","www.tajhotel.in")
	h.get();

}
