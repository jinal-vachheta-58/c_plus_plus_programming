// ...............................................................................................
// 3.10: An electricity board charges the following rates to domestic users to
// discourage large consumption of energy:
// For the first 100 units – 60P per unit
// For the first 200 units – 80P per unit
// For the first 300 units – 90P per unit
// All users are charged a minimum of Rs. 50.00. If the total amount is more than Rs. 300.00 then an
// additional surcharge of 15% is added.
// Write a program to read the names of users and number of units consumed and print out the
// charges with names.
// ...............................................................................................

#include<iostream>
#define min 50;
using namespace std;

class user{
	char name[5][10];
	int unit[5];
	float amount[5];
	public:
		void getdata(void);
		int cal_amo(void);
		void display(void);
};


int main()
{
	user u;
	u.getdata();
	u.cal_amo();
	u.display();

}


void user::getdata(void) 
{
	for(int i=0;i<5;i++)
	{
	cout<<"Enter the user Name :";
	cin>>name[i];
	
	cout<<endl<<"Enter the unit :";
	cin>>unit[i];
	
	cout<<"--------------------------------"<<endl;
	
	}
}

int user::cal_amo(void)
{
	for(int i=0;i<5;i++)
	{
		if(unit[i] ==0)
		{
			amount[i]=min;
			
		}
		else if(unit[i] <= 100)
		{
			amount[i]=(unit[i]*0.60)+min;
		}
		else if(unit[i] > 100 && unit[i] <200)
		{
			amount[i]=(unit[i]*0.80)+min;
		}
		else 
		{
			amount[i]=(unit[i]*0.90)+min;
		}
		
		
		
		
		if(amount[i] >= 300)
		{
			amount[i]+=0.15*amount[i];
		}
	}
}

void user::display()
{
		cout<<"The information is .........."<<endl;
		
	for(int i=0;i<5;i++)
	{
		cout<<"Name \t Unit\t amount\n";
		cout<<name[i]<<"\t"<<unit[i]<<"\t"<<amount[i]<<endl;
	}
}


// >>>>>>>>>
// OUTPUT:
// >>>>>>>>>

// ------------------------------------------------------------------------------------------------------------
// Enter the user Name :hiren

// Enter the unit :0
// --------------------------------
// Enter the user Name :dev

// Enter the unit :55
// --------------------------------
// Enter the user Name :tej

// Enter the unit :145
// --------------------------------
// Enter the user Name :jay

// Enter the unit :230
// --------------------------------
// Enter the user Name :nirmal

// Enter the unit :350
// --------------------------------
// The information is ..........
// Name     Unit    amount
// hiren   0       50
// Name     Unit    amount
// dev     55      83
// Name     Unit    amount
// tej     145     166
// Name     Unit    amount
// jay     230     257
// Name     Unit    amount
// nirmal  350     419.75

// --------------------------------
// Process exited after 39.19 seconds with return value 0
// Press any key to continue . . .
