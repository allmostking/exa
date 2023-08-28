#include<iostream>
#include<string.h>
using namespace std;

class Time{
	public:
	int s;
	int h;
	int m;
};
int main()
{
	Time t,h,m,s;
	cout<<"enter time in second :"<<endl;
	cin>>t.s;

	t.h=t.s/3600;
	t.s=t.s%3600;
	t.m=t.s/60;
	t.s=t.s%60;
	t.s=t.s;

	cout<<"time in HH:MM:SS format is :"<<t.h<<":"<<t.m<<":"<<t.s<<endl;

}
