// 5.1: Define a class to represent a bank account. Include the following members:
// Data members:
// 1. Name of the depositor.
// 2. Account number.
// 3. Type of account.
// 4. Balance amount in the account.
// Member functions:
// 1. To assign initial values.
// 2. To deposit an amount.
// 3. To withdraw an amount after checking the balance.
// 4. To display the name and balance.
// Write a main program to test the program.
// ............................................................................................................


#include<iostream>
using namespace std;

class bank{
	char name[20];
	int ac_no;
	char ac_type[20];
	double balance;
	
	public:
		int assign(void);
		void deposite(float b);
		void withdrow(float c);
		void display(void);
};

int bank::assign(void)
{
	float initial;
	cout<<"you have to pay 500 to open your accountn\n"
	<<"would you have to open a account?\n";
	cout<<"enter 1 for yes or 2 for no\n";
	
	int choice;
	cin>>choice;
	if(choice==1)
	{
		initial=500;
		balance=initial;
		cout<<"enter name,account number & accoutn type to creat account:\n";
		cin>>name>>ac_no>>ac_type;
	}
	else;
	return choice;
}

void bank::deposite(float b)
{
	balance+=b;
}

void bank::withdrow(float c)
{
	balance-=c;
	if(balance<500)
	{
		cout<<"Sorry your balance is not sufficient to withdraw"<<c<<endl;
		balance+=c;
	}
}

void bank::display(void)
{
	cout<<"name:"<<name<<endl;
	cout<<"account type:"<<ac_type<<endl;
	cout<<"balance:"<<balance<<endl;
}

int main()
{
	bank account;
	
	int ass;
	ass=account.assign();
	
	if(ass==1)
	{
		cout<<"you want to deposite ?:"<<endl<<"enter 0 for no...\nif yes then enter amount..."<<endl;
		float depo;
		cin>>depo;
		account.deposite(depo);
		
		cout<<"you want to withdraw ?:"<<endl<<"enter 0 for no...\nif yes then enter amount..."<<endl;
		float wd;
		cin>>wd;
		account.withdrow(wd);
		
		cout<<"your details:"<<endl;
		account.display();
		
	}
	else
		cout<<"thank you!"<<endl;
	return 0;
	
}
// ............................................................................................................
// you have to pay 500 to open your accountn
// would you have to open a account?
// enter 1 for yes or 2 for no
// 2
// thank you!
