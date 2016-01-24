#include "DataNode.h"
#include "string"

using namespace std;

// Constructor
DataNode::DataNode(string data)
{
	DataNode::setData(data);
	DataNode::nextNode = NULL;
}

DataNode::~DataNode(){}

// Mutators
string DataNode::getData(){
	return DataNode::data;
}

DataNode* DataNode::getNextNode(){
	return DataNode::nextNode;
}

void DataNode::setData(string data){
	DataNode::data = data;
}

void DataNode::setNextNode(DataNode* nextNode){
	DataNode::nextNode = nextNode;
}