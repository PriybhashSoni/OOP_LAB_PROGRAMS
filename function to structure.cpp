#include<iostream>
using namespace std;
struct person
{
	char name[15];
	int rollno;
	char branch;
};
person getdata(struct person)
void display( struct person)
int main()
{
	person p;
	p=getdata(p);
	return 0;
}
person getdata(person p)
{
	cout<<"enter name"<<endl;
	cin>>p.name;
		cout<<"enter rollno"<<endl;
	cin>>p.rollno;
		cout<<"enter branch"<<endl;
	cin>>p.branch;
}
void display(person p)
{
	cout<<p.name<<endl;
		cout<<p.rollno<<endl;
			cout<<p.branch<<endl;
}
