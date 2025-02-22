#include "ExercisePlan.hpp"
#include "DietPlan.hpp"
#include <string>


class Node
{
public:

	Node* pNext;

	int node_integerValue;
	std::string first_node_string;
	std::string second_node_string;

	Node(int new_node_integerValue, std::string new_first_node_string, std::string new_second_node_string)
	{
		node_integerValue = new_node_integerValue;
		first_node_string = new_first_node_string;
		second_node_string = new_second_node_string;
	}
};

class LinkedList 
{
public: 

	Node* pHead;

	LinkedList()
	{
		pHead = nullptr;
	}

	void insertAtEnd(int node_integerValue, std::string  first_node_string, std::string second_node_string)
	{
		Node* nodeToInsert = new Node(node_integerValue, first_node_string, second_node_string);//malloc for new node

		if (pHead == nullptr)
		{
			pHead = nodeToInsert;
			return;
		}

		Node* tempNode = pHead;
		while (tempNode != nullptr)
		{
			tempNode = tempNode->pNext;
		}
		//once the list is traversed, set tempNode = nodeToInsert
		tempNode->pNext = nodeToInsert;

	}

};