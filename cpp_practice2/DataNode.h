#include <string>
#pragma once

using namespace std;

class DataNode
{
	string data;
	DataNode* nextNode;

	public:
		DataNode(string);
		~DataNode();

		// Mutators
		void setData(string);
		void setNextNode(DataNode*);
		DataNode* getNextNode();
		string getData();
};

