#include "ExercisePlan.hpp"
#include "DietPlan.hpp"
#include <string>


class Node
{
private:

	Node* pNext;

	Node(int goal_steps, std::string name, std::string date) {}
};

class LinkedList {
public: 

	Node* pHead;

	LinkedList() : pHead(nullptr) {}

	void insertAtEnd();

};