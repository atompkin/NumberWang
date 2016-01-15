#include <iostream>
#include <stdlib.h>
using namespace std;

bool numberwang(int n)
{
	if(n == 0)
	{
		cout << endl << "That's Numberwang!" << endl;
		return true;
	}
	return false;
}

int main()
{
	bool player = true;
	string name1;
	string name2;
	int round;
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
 cin >> round;
 cout << endl;
 cout << "Well, if you're ready, let's play Numberwang!" << endl;

while(round>0)
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
		round --;
		time = rand() % 5 + 1;
	}
	time --;
}

cout << "Final scores: " << name2 << " pulls ahead with " << rand() % 210 + 30 << ", ";
cout << "and " << name1 << " finishes with " << rand() % 25 + 2 << "." << endl;
 return 0;
}


