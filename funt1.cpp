#include<iostream>
using namespace std;
class bank
{
	private:
		int age;
		char name[19];
		int acc_no;
		int acc_bal;
	//	int acc_num;
		public:
			void openaccount();
			void showaccount();
			void deposit(int j);
			{
		    int amt;
		    if(acc_no=j)
		    {
		    	cout<<"enter account number :"<<endl;
		    	cin>>acc_no;
		    	cout<<"enter amount you want to deposit"<<endl;
		    	cin>>amt;
		    	acc_bal=act_bal +amt;
		    	cout<<"...Successfully amount deposit"<<acc_bal<<endl;
			}
		    else
		    
		    	cout<<"cant deposit amount,account not found"<<endl;
			
	}
		 public int withdrawl(int k)
		{
			if(acc_no==k)
			{
				int with_amt;
				cout<<"enter acc no for withdrawl"<<endl;
				cin>>acc_no;
				cout<<"enter amount you want to withdrawl"<<endl;
				cin>>with_amt;
				if(acc_bal>1500 && acc_bal>with_amt)
				{
					acc_bal=acc_bal-with_amt;
					cout<<"current account balance is "<<acc_bal<<endl;
				}
				else
				cout<<"cant withdrawl ,low balance"<<endl;
			}
		}
		void searchacc(int n)	
		if(acc_no=n)
		cout<<"account found"<<endl;
		else
		cout<<"account cant exist"<<endl;
};
void bank::openaccount()
{
	cout<<"enter age of account holder :"<<endl;
	cin>>age;
	if(age>18)
	{
		cout<<"enter your name :"<<endl;
		cin>>name;
		cout<<"enter your account number"<<endl;
	    cin>>acc_no;
	    cout>>"enter account balance "<<endl;
	    cin>>acc_bal;
     	cout<<"thank you for opening account"<<endl;
     	else
     	cout<<"sorry,invalid age cant open account"<<endl; 
	}
	
}

void bank::showaccount()
{
	int i;
	cout<<"enter account number"<<endl;
	cin>>i;
	if(i==acc_no)
	{
	 cout<<"what you want :"<<endl;
	 cout<<"1. acc no "<<endl;
	 cout<<"2. acc holder age"<<endl;
	 cout<<"3. acc balance"<<endl;
    }
else
cout<<"account could not found"<<endl;
}
int menu()
{
	while(1)
	{
		int ch;
		cout<<"\t\t enter 1 to open account"<<endl;
		cout<<"\t\t enter 2 to deposit account"<<endl;
		cout<<"\t\t enter 3 to show account"<<endl;
		cout<<"\t\t enter 4 to withdrawl account"<<endl;
		cout<<"\t\t enter 5 to search account"<<endl;
		cout<<"enter your choice "<<endl;
		cin>>ch;
		return ch;
	}
}
int main()
{
	cout<<"welcome to our bank"<<endl;
    bank b[200];
    int i,y,j,k,n;
    do
    {
    	int menu();
    	switch(menu())
    	{
    		case 1:
    			{
    				cout<<"how many cases you want :"<<endl;
    				cin y;
    				for(i=0;i<5;i++)
    				b[i].openaccount();
    				break;
				}
			case 2:
			{
				cout<<"please enter your account no. "<<endl;
				cin>>j;
				for(i=0;i<y;i++)
				b[i].deposit(j);
				break;
				}
			case 3:
				{
					for(i=0;i<y;i++)
					b[i].showaccount()
					break;
					}	
			case 4:
				{
					cout<<"enter account number to verify"<<endl;
					cin>>k;
					for(i=o;i<y;i++)
					b[i].withdrawl(k);
					break;
				}
			case 5:
				{
					cout<<"enter acc to verify"<<endl;
					cin>>n;
					for(i=0;i<y;i++)
					b[i].searchaccount(n);
					break;
				}
			case 6:
				{
					exit(0);
					break;
					defaut:
						cout<<"ok mai chal ta hu";
				}
		}   
			while(1)
return 0;
}









































