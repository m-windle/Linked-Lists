#pragma once
#include "DataNode.h"
#include <string>

class LList
{
	DataNode* firstNode;
	DataNode* currentNode;
	DataNode* createNode();
	void freeNode(DataNode*);

	public:
		LList(string);
		~LList();

		// Mutators
		void setFirstNode(DataNode*);
		void setCurrentNode(DataNode*);
		DataNode* getFirstNode();
		DataNode* getCurrentNode();

		// Modifiers
		void addNewNode(string);

		// Traversal
		DataNode* getNextNode();
};

