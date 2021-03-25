#include<iostream>
using namespace std;
int main()
{
	//void *gp; //gp is generic pointer. 
	void * gp; int *ip; ip = (int * ) gp 
	void fun();              //function declare kiya
	cout<<"you are in main"<<endl;
	fun();                      //function ko call kiya
}
void fun()                    //function ko define kiya
{
	cout<<" you are in fun";
}
