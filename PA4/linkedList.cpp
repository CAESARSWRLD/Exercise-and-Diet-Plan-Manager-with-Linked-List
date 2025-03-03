#include "linkedList.hpp"
#include "Node.hpp"


void linkedList::displayWeeklyPlan_diet() const
{
	Node* tempNode = pHead;
	while (tempNode)
	{
		displayDailyPlan_diet(tempNode);

		tempNode = tempNode->pNext;
	}
}


void linkedList::displayDailyPlan_diet(Node* tempNode)const
{
	std::cout << *(tempNode->dietPlan) << std::endl;
}

void linkedList::displayWeeklyPlan_exercise() const
{
	Node* tempNode = pHead;
	while (tempNode)
	{
		displayDailyPlan_exercise(tempNode);

		tempNode = tempNode->pNext;
	}
}

void linkedList::displayDailyPlan_exercise(Node* tempNode) const
{
	std::cout << *(tempNode->exercisePlan) << std::endl;
}