
#include<iostream>
using namespace std;
class s{
	string author;
	string title;
	int price;
	string pub;
	int s_p;
	public:
		s(string a,string t,int p,string pu,int s)
		{
			author = a;
			title = t;
			price = p;
			pub = pu;
			s_p = s;
		}
		void print_data()
		{
			cout<<"author name is : "<<author<<endl;
			cout<<"title name is : "<<title<<endl;
			cout<<"price of book is : "<<price<<endl;
			cout<<"publisher name is : "<<pub<<endl;
			cout<<"stok position is : "<<s_p<<endl;
		}	
		void serch();
};
void s :: serch()
{
	string stitle,sauthor;
	int no;
    int succesfull = 0;
	int unsuccesfull = 0;	
	
	cout<<endl<<"enter the title";
	cin>>stitle;
	cout<<endl<<"enter the name of author";
	cin>>sauthor;
	
	if(stitle == title && sauthor == author)
	{
		print_data();
		
		cout<<endl<<"enter the how many copies required :";
		cin>>no;
		if(no <= s_p)
		{
		int total;
		total = price * no;
		cout<<"total cost of price : "<<total;
		}
	    else
	    {
	    	cout<<endl<<"book stock is not available"<<endl;
		}
		succesfull++;
		cout<<"\n___________\n";
		cout<<"succesfull transaction : "<<succesfull;
		cout<<"\n___________\n";
	}
	else
	{
		cout<<endl<<"book is not avaiable.. ";
		unsuccesfull++;
		
		cout<<"\n___________\n";
		cout<<"unsuccesfull transaction : "<<unsuccesfull;
		cout<<"\n___________\n";
	}
}
int main()
{
	s st = s("r","v",670,"me",9);
	st.print_data();
	st.serch();
}
/*
author name is : r
title name is : v
price of book is : 670
publisher name is : me
stok position is : 9

enter the titlev

enter the name of authorr
author name is : r
title name is : v
price of book is : 670
publisher name is : me
stok position is : 9

enter the how many copies required :2
total cost of price : 1340
___________
succesfull transaction : 1
___________
*/
