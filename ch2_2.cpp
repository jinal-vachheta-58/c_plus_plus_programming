// ............................................................................................................
// 2.2 Write a program to read two numbers from the keyboard and display the larger value on the screen . 
// ............................................................................................................
#include<iostream>
using namespace std ;
int main()
{
	int a,b;
	
	cout<<"enter a : ";
	cin>>a;
	cout<<"enter b : ";
	cin>>b;
	
	if(a>b)
	{
		cout<<a<<" "<<"is max";
	}
	else
	{
		cout<<b<<" "<<"is max";
	}
	return 0;
	
	
}


// >>>>>>>>>
// OUTPUT:
// >>>>>>>>>

// enter a : 33
// enter b : 44
// 44 is max
