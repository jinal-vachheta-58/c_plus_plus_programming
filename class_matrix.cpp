// 7.3 : Create a class MAT of size m * n. Define all possible matrix operations for MAT type objects.

// ----------------------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

class MAT
{
    int matrix[2][2];

    public:
            void accept()
            {
                cout<<"\nEnter elements : "<<endl;
                for(int i=0;i<2;i++)
                {
                    for(int j=0;j<2;j++)
                        cin>>matrix[i][j];
                }
            }

            void display()
            {
                for(int i=0;i<2;i++)
                {
                    cout<<endl;
                    for(int j=0;j<2;j++)
                        cout<<"  "<<matrix[i][j];
                }
            }

            MAT operator +(MAT M2)
            {
                MAT M3;
                for(int i=0;i<2;i++)
                {
                    for(int j=0;j<2;j++)
                    {
                      M3.matrix[i][j] = matrix[i][j] + M2.matrix[i][j];
                    }
                }
                return M3;
            }

            MAT operator *(MAT M2)
            {
                MAT M3;

                for(int i=0;i<2;i++)
                {
                    for(int j=0;j<2;j++)
                    {
                      M3.matrix[i][j]=0;
                      
					  for(int k=0;k<2;k++)
                      {
                         M3.matrix[i][j] = ( matrix[i][k] * M2.matrix[k][j] ) + M3.matrix[i][j];
                      }
                    }
                }

                return M3;
            }
};


int main()
{
    MAT M1,M2,M3;


    cout<<"\nEnter Matrix M1 values : ";
    M1.accept();
	
	cout<<"\nEnter Matrix M2 values : ";
    M2.accept();

    M3=M1+M2;
    cout<<"\nMatrix addition : ";
    M3.display();
	

    M3=M1*M2;
    cout<<"\nMatrix multiplication : ";
    M3.display();

    return 0;
}

// ----------------------------------------------------------------------------------------------------------------------------
// Output:


// Enter Matrix M1 values :
// Enter elements :
// 5
// 4
// 3
// 6

// Enter Matrix M2 values :
// Enter elements :
// 3
// 4
// 5
// 6

// Matrix addition :
//   8  8
//   8  12
// Matrix multiplication :
//   35  44
//   39  48
