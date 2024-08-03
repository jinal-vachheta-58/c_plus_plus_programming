// 4.2: Write a program to read a matrix of size m*n from the keyboard and display the same
// on the screen using function.
// ............................................................................................................


#include<iostream>
using namespace std;

int main()
{
	int a,b;
	int arr[a][b],i,j;
	
	cout<<"enter size of matrix:";
	cin>>a>>b;
	
	cout<<"enter "<<a<<" by "<<b<<" matrix elementd:"<<endl;
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cout<<"enter value ["<<i<<"]["<<j<<"]:";
			int value;
			cin>>value;
			arr[i][j]=value;
		}
		cout<<endl;
	}
	
	cout<<"the matrix is:"<<endl;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<"\n"<<endl;
	}
	
	return 0;
}

// ............................................................................................................
// output:-
// Enter size of matrix : 4 4
// Enter 4 by 4 matrix elements one by one
// 1 2 3 4 7
// 2 3 4 5 8
// 3 4 5 6 9
// The given matrix is :
// 1 2 3 4 7
// 2 3 4 5 8
// 3 4 5 6 9
