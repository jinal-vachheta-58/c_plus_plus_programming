
// Question 2)Define a class String that could work as a user-defined string type. Include constructors that will enable us to create an uninitialized string String s1; 
// //string with length 0
// and also to initialize an object with a string constant at the time of creation like String $2("Well done!") Include a function that adds two strings to make a third string. 
// Note that the statement s2 s1; will be perfectly reasonable expression to copy one string to another.Write a complete program to test your class to see that it does 
// the following tasks:
// (a) Creates uninitialized string objects.

// (b) Creates objects with string constants.
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;

class String{
	
	public:
		string str;
		String(){
			cout<<str;
		}
		String(string str){
			this->str = str;
		}
		string addTwoStrings(string str1, string str2){
			return (str1 + " " + str2);
		}
};
int main()
{
	
	String strObj1;
	String strObj2("Hi, there is");
	String strObj3;
	string s1, s2;
	cout<<"Enter string-1 to concat with other string : ";
	cin>>s1;
	cout<<endl<<"Enter string-2 : ";
	cin>>s2;	
	cout<<"String After Concatenation : "<<strObj3.addTwoStrings(s1, s2);
	strObj1 = strObj2;	
	cout<<endl<<"Copied String : "<<strObj1.str;
	return 0;
}
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// output
// Enter string-1 to concat with other string : Hello

// Enter string-2 : World
// String After Concatenation : Hello World
// Copied String : Hi, there is
