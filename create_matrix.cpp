
// ******************************************************************************************************
// ............................................................................................................
// // 4.1: Write a function to read a matrix of size m*n from the keyboard.
// ............................................................................................................


#include<iostream>
using namespace std;

void matrix(int a,int b)
{
	int arr[a][b],i,j;
	
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
	
	
}

int main()
{
	int a,b;
	cout<<"enter size of matrix:";
	cin>>a>>b;
	
	matrix(a,b);
	return 0;
}


/*
output:-
Enter size of matrix : 3 4
Enter 3 by 4 matrix elements one by one
1 2 3 4
2 3 4 5
3 4 5 6
The given matrix is :

1 2 3 4
2 3 4 5
3 4 5 6
*/
