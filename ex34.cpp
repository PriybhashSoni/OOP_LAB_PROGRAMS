#include<iostream>
using namespace std;
class item
{
	int cost;
	int number;
	public:
		void getdata(int a,int b);
		void putdata()
		{
			cout<<" number is "<<number<<endl;
			cout<<"cost is "<<cost<<endl;
		}
};
inline void item :: getdata(int a, int b)
{
cost=a;
number=b;
}
int main()
{
	item x,y;
	cout<<"for x "<<endl;
	x.getdata(3,4);
	x.putdata();
	cout<<"for y"<<endl;
	y.getdata(3,1);
	y.putdata();
	return 0;
}
