#include <iostream>
#include <Windows.h>
#include "GenLList.h"
#include "LList.h"


int main(){
	cout << "Hello!\n\n";
	
	// String test Case
	LList newList = LList("Hello ");
	newList.addNewNode("world!\n");
	newList.addNewNode("How are you?\n");

	DataNode* current = newList.getFirstNode();
	std::cout << current->getData();
	current = current->getNextNode();
	std::cout << current->getData();
	current = current->getNextNode(); 
	std::cout << current->getData();

	// Generics (String) Test Case
	GenLList<string> newGenList = GenLList<string>("Hello ");
	newGenList.addNewNode("world!\n");
	newGenList.addNewNode("How are you?\n");

	GenDataNode<string>* genCurrent = newGenList.getFirstNode();
	std::cout << genCurrent->getData();
	genCurrent = genCurrent->getNextNode();
	std::cout << genCurrent->getData();
	genCurrent = genCurrent->getNextNode(); 
	std::cout << genCurrent->getData();

	// Generics (Int) Test Case
	GenLList<int> newGenIntList = GenLList<int>(1);
	newGenIntList.addNewNode(2);
	newGenIntList.addNewNode(3);

	GenDataNode<int>* genIntCurrent = newGenIntList.getFirstNode();
	std::cout << genIntCurrent->getData() << endl;
	genIntCurrent = genIntCurrent->getNextNode();
	std::cout << genIntCurrent->getData() << endl;
	genIntCurrent = genIntCurrent->getNextNode();
	std::cout << genIntCurrent->getData() << endl;

	system("PAUSE");
	return 0;
}