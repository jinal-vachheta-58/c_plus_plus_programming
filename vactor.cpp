// 5.2: Write a class to represent a vector (a series of float values). Include member functions
// to perform the following tasks:
// (a) To create the vector.
// (b) To modify the value of a given element.
// (c) To multiply by a scalar value.
// (d) To display the vector in the form (10, 20, 30 ...)
// Write a program to test your class.
// ............................................................................................................


#include<iostream>
using namespace std;

class vector{
	float *p;
	int size;
	
	public:
		void creat_vector(int a);
		void set_element(int i,float value);
		void modify(void);
		void multiply(float b);
		void display(void);
};

void vector::creat_vector(int a)
{
	size=a;
	p=new float[size];
}

void vector::set_element(int i,float value)
{
	p[i]=value;
}

void vector::display(void)
{
	cout<<"p["<<size<<"]=";
	for(int i=0;i<size;i++)
	{
		if(i==size-1)
		{
			cout<<p[i];
		}
		else
		{
			cout<<p[i]<<",";
		}
	}
	cout<<endl;
}

void vector::multiply(float b)
{
	for(int i=0;i<size;i++)
	{
		p[i]=b*p[i];
	}
}

void vector::modify(void)
{
	int i;
	cout<<"enter position to edit element:";
	cin>>i;
	i--;
	
	cout<<"enter value for "<<i+1<<":"<<endl;
	float v;
	cin>>v;
	
	p[i]=v;
	
	cout<<"display:"<<endl;
	display();
	
	cout<<"enter possition to delete element:";
	cin>>i;
	i--;
	
	for(int j=i;j<size;j++)
	{
		p[j]=p[j+1];
	}
	size--;
	cout<<"display:";
	display();
}

int main()
{
	vector a;
	int s;
	
	cout<<"enter size of vector:";
	cin>>s;
	a.creat_vector(s);
	
	cout<<"enter "<<s<<"elements"<<endl;
	for(int i=0;i<s;i++)
	{
		float v;
		cin>>v;
		a.set_element(i,v);
	}
	
	cout<<"content:"<<endl;
	a.display();
	
	cout<<"enter scaler value for multiply:";
	float m;
	cin>>m;
	
	a.multiply(m);
	cout<<"content:"<<endl;
	a.display();
	a.modify();
	return 0;
}

// ............................................................................................................
// output:-
// enter size of vector:4
// enter 4elements
// 1
// 2
// 3
// 4
// content:
// p[4]=1,2,3,4
// enter scaler value for multiply:6
// content:
// p[4]=6,12,18,24
// enter position to edit element:3
// enter value for 3:
// 31
// display:
// p[4]=6,12,31,24
// enter possition to delete element:4
// display:p[3]=6,12,31
