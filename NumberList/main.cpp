#include <iostream>
#include <fstream>
#include "NumberList.h"
using namespace std;

int main()
{
	/*NumberList bigelow;
	int number;
	ifstream infile;
	infile.open("Text.txt");
	while (!infile.eof()) 
	{
		infile >> number;
		bigelow.insertNode(number);
	}
	infile.close();

	bigelow.displayList();
	*/
	
	NumberList listA, listB;
	listA.appendNode(10);
	listA.appendNode(20);
	listB.appendNode(15);
	listB.appendNode(40);
	cout << "list A before assign: " << endl;
	listA.displayList();
	cout << "list B before assign: " << endl;
	listB.displayList();
	listA = listB;	// assign B to A
	listB.appendNode(50);
	cout << "list A after assign: " << endl;
	listA.displayList();
	cout << "list B after assign: " << endl;
	listB.displayList();

	return 0;
}
