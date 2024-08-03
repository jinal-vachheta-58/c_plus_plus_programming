
//  Demonstrate the use of static variables in a class by 
//  using it to count the number of objects created in the program.
// ------------------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
 using namespace std;
 class counter
 {
         static int count;
     public:
          counter()
         {
             count++;
            
         }
     void display()
     {
         cout<<"The number of objects created are: "<<count<<endl;
     }
 };
 int counter::count=0;
 int main()
 {
     counter c1;
     counter c2;
     
     counter c3;
     c3.display();
     
     counter c4;
     c4.display();
 }
// ------------------------------------------------------------------------------------------------------------------------------------------
// OutPut:-
// The number of objects created are: 3
// The number of objects created are: 4
