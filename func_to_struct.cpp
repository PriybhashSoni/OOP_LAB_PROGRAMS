#include<iostream>
using namespace std;
struct person
{
	char name [30];
	int age;
	float salary;
};
person getdata(struct person)
void display(struct person)

int main()
{
	person p;
	p=getdata(p);
	display(p);
	return 0 ;
}
person getdata(person p)
{
	cout<<"Enter your name";
	cin>>p.name;
	cout<<"Enter your age"<<endl;
	cin>>p.age;
	cout<<"enter your salary"<<endl;
	cin>>p.salary;
	return p;
}
void display(person p)
{
	cout<<p.name<<endl;
	cout<<p.age<<endl;
	cout<<p.salary<<endl;
	
}
