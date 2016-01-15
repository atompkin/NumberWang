#include <iostream>
#include <stdlib.h>
using namespace std;

bool numberwang(int n)
{
	if(n == 0)
	{
		cout << endl << "That's Numberwang!" << endl << endl;
		return true;
	}
	return false;
}

int main()
{
	bool player = true;
	bool pStart = false;
	string name1;
	string name2;
	int roundMax;
	int round = 1;
	int temp;
	int time = rand() % 5;
       cout << "Hello, and welcome to Numberwang, the maths quiz that simply everyone is talking about!" << endl;

cout << "What is player 1's name? ";
cin >> name1;
cout << endl;
cout << "what is player 2's name? ";
cin >> name2;
cout << endl; 
 cout << "How many rounds? ";
 cin >> roundMax;
 cout << endl;
 cout << "Well, if you're ready, let's play Numberwang!" << endl << endl;
 cout << "Round 1, " << name1 << " to play first." << endl << endl;

while(round<=roundMax)
{
	
	if(player)
	{
		cout << name1 << ": ";
		cin >> temp;
		player = false;
	}
       	else
       	{
		cout << name2 << ": ";
		cin >> temp;
		player = true;
	}

	if(numberwang(time))
	{
		round ++;
		time = rand() % 5 + 1;
		if(pStart)
		{
			pStart = false;
			player = true;
			cout << "Round " << round << ", " << name1 << " to play first. " << endl << endl;
		}
		else
		{
			pStart = true;
			player = false;
			 cout << "Round " << round << ", " << name2 << " to play first. " << endl << endl;
		}

	}
	time --;
}

cout << "Final scores: " << name2 << " pulls ahead with " << rand() % 210 + 30 << ", ";
cout << "and " << name1 << " finishes with " << rand() % 25 + 2 << "." << endl;
 return 0;
}


