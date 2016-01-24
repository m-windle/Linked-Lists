#include "LList.h"
#include <string>
#include <Windows.h>

using namespace std;

// Constructor
LList::LList(string data)
{
	DataNode* firstNode = LList::createNode();
	firstNode->setData(data);
	LList::setFirstNode(firstNode);
	LList::setCurrentNode(firstNode);
}

LList::~LList(){}

// Mutators
void LList::setFirstNode(DataNode* node){
	LList::firstNode = node;
}

void LList::setCurrentNode(DataNode* node){
	LList::currentNode = node;
}

DataNode* LList::getFirstNode(){
	return LList::firstNode;
}

DataNode* LList::getCurrentNode(){
	return LList::currentNode;
}

// Modifiers
void LList::addNewNode(string data){
	DataNode* newNode = LList::createNode();
	newNode->setData(data);

	DataNode* current = LList::getCurrentNode();
	current->setNextNode(newNode);

	LList::setCurrentNode(newNode);
}

DataNode* LList::createNode(){
	DataNode* newNode = (DataNode*)malloc(sizeof(DataNode));
	ZeroMemory(newNode, sizeof(DataNode));

	return newNode;
}

void LList::freeNode(DataNode* node){
	free(node);
}

// Traversal
DataNode* LList::getNextNode(){
	DataNode* current = LList::getCurrentNode();

	return current->getNextNode();
}