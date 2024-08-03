

// create two class DM and DB which store the value of distances. DM stores distances in 
// metres and centimetres and DB in feet and inches. Write a progem that can read values
// from the class objects and add one object of DM with another object of DB.

// Use friend function to carry out addition operation. The object that stores the results
// may be a DM object or DB object, depending on the units in which the results are 
// requires.

// The display should be in the format of feet and inches or metres and centimetres
// depending on the object on display. */


#include<iostream>
using namespace std;

class DM;
class DB;

class DM
{
	float meters;
    float centimeters;
   
    public:
    	void getdata()
    	{
	    	cout << "Enter distance in meters: ";
	        cin >> meters;
	        cout << "Enter distance in centimeters: ";
	        cin >> centimeters;
		}
		
		void display() 
		{
        	cout<<"Distance: "<<meters<<" meters, "<<centimeters<<" centimeters"<<endl;
    	}
    	
    	friend DM add(DM,DB);
    	
};
class DB
{
	float feet;
    float inches;
    
    public:
    	void getdata() 
		{
	        cout << "Enter distance in feet: ";
	        cin >> feet;
	        cout << "Enter distance in inches: ";
	        cin >> inches;
    	}
    void display() {
        cout<<"Distance: "<<feet<<" feet, "<<inches<<" inches"<<endl;
    }
	friend DM add(DM,DB);
	
};

DM add(DM dmo1, DB dbo1)
{
	DM result;
	float m,cm,feet,inch;
	float res;
	
	m = dmo1.meters*100;
	cm = dmo1.centimeters;
	feet = dbo1.feet* 30.48;
	inch = dbo1.inches*2.54;
	res = (m+cm+feet+inch);
	
	result.meters = res / 100;
	result.centimeters = (int)res % 100;
	
	return result;
}

int main()
{
	DM dmo1,result;
    DB dbo1;

    
    dmo1.getdata();
    dbo1.getdata();
    
    result=add(dmo1,dbo1);
    cout<<"Result in Centimeter : \n";
    result.display();
    
}

/*
output :
Enter distance in meters: 1
Enter distance in centimeters: 2
Enter distance in feet: 3
Enter distance in inches: 4
Result in Centimeter :
Distance: 2.036 meters, 3 centimeters

*/

