// ............................................................................................................
// 3.3: Write a program to print the following outputs using for loops
// 1
// 22
// 333
// 4444
// 55555
// ………………

// ............................................................................................................

#include <iostream>
using namespace std;
int main()
{
	int i,j;
	
	for(i=0;i<6;i++)
	{
		for(j=0;j<i;j++)
		{
			cout<<i;
		}
		cout<<endl;
	}
	
																

    return 0;
}



// >>>>>>>>>
// OUTPUT:
// >>>>>>>>>


// 1
// 22
// 333
// 4444
// 55555

// --------------------------------