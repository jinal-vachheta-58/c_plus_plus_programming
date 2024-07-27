// ............................................................................................................
// 3.1: Write a function using reference variables as arguments to swap the values of a pair of
// integers.
// ............................................................................................................

#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp;
	
	temp=a;
	a=b;
	b=temp;
	
	
	
}
int main()
{
	int a,b;
	
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	
	cout<<"after swap:";
	cout<<endl<< "a="<<a<<endl<<"b="<<b;
	
	swap(a,b);
	
	cout<<"\nbefore swap:";
	cout<<endl<< "a="<<a<<endl<<"b="<<b;
	return 0;
	
}


// >>>>>>>>>
// OUTPUT:
// >>>>>>>>>


// Enter a:12
// Enter b:13
// after swap:
// a=12
// b=13
// before swap:
// a=13
// b=12
// --------------------------------
