// NatalieEpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Node.h"


int main()
{
	int num[5] = { 1,2,1,4,5 };
	int deletenum;

	Node myList;

	cout << "Please insert 5 numbers into the Linked list: ";
		for (int i = 0; i < 5; i++)
		{
			myList.insertNode(num[i]);
		}

		cout << "Please select a number to delete from the list: ";
		cin >> deletenum;
		myList.deleteNode(deletenum);

		cout << "Here is your list: " << endl;


    return 0;
}

