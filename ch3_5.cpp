// ............................................................................................................
// 3.5: An election is contested by five candidates. The candidates are numbered 1 to 5 and the
// voting is done by marking the candidate number on the ballot paper. Write a program to
// read the ballots and count the vote cast for each candidate using an array variable count. In
// case, a number read is outside the range 1 to 5, the ballot should be considered as a “spoilt
// ballot” and the program should also count the numbers of “spoilt ballots”.
// ............................................................................................................

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int vote,i,count[6]={0,0,0,0,0,0};

	for(i=0;i<10;i++)
	{
		cout<<"enter your vote:";
		cin>>vote;
		
		if(vote == 1)
		{
			count[0]++;
		}
		else if(vote == 2)
		{
			count[1]++;
		}
		else if(vote == 3)
		{
			count[2]++;
		}
		
		else if(vote == 4)
		{
			count[3]++;
		}
		else if(vote == 5)
		{
			count[4]++;
		}
		else{
			count[5]++;
		}
	}
	
	cout<<"number of votes for 1:"<<count[0]<<endl;
	cout<<"number of votes for 2:"<<count[1]<<endl;
	cout<<"number of votes for 3:"<<count[2]<<endl;
	cout<<"number of votes for 4:"<<count[3]<<endl;
	cout<<"number of votes for 5:"<<count[4]<<endl;
	cout<<"invalid votes:"<<count[5];
	return 0;
}



// >>>>>>>>>
// OUTPUT:
// >>>>>>>>>

// enter your vote:1
// enter your vote:2
// enter your vote:3
// enter your vote:4
// enter your vote:5
// enter your vote:3
// enter your vote:3
// enter your vote:3
// enter your vote:3
// enter your vote:5
// number of votes for 1:1
// number of votes for 2:1
// number of votes for 3:5
// number of votes for 4:1
// number of votes for 5:2
// invalid votes:0
// --------------------------------
