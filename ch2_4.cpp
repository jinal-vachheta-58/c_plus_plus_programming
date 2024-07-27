// ............................................................................................................
// 2.4 Write a program to read the values of a,b and c and display the value of x,where 
// 					x = a / b - c
// test your program for the following values:
// (a) a = 250 , b = 85 , c = 25
// (b) a = 300 , b = 70 , c = 70
// ............................................................................................................


#include<iostream>
using namespace std;

int main()

{
	int a,b,c;
	float x;
	cin>>a>>b>>c;
	x=float(a / b - c);
	cout<<"x is :"<<x;
}

// >>>>>>>>>
// OUTPUT:
// >>>>>>>>>

// Enter number :250
// 85
// 25
// x is :-22.0588
// --------------------------------

// Enter number :300
// 70
// 70
// x is :-65.7143
// --------------------------------
