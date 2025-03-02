#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#pragma once

#include "Node.hpp"
#include "DietPlan.hpp"
#include "ExercisePlan.hpp"
class linkedList
{
private:
public:
	Node* pHead;

	linkedList() : pHead(nullptr) {}

	void insertEnd(const DietPlan& dietplan)
	{
		Node* newestNode = new Node(dietplan);

		if (!pHead)
		{
			pHead = newestNode;

		}
		else
		{
			Node* temp = pHead;
			while (temp->pNext)
			{
				temp = temp->pNext;//find the end of the list
			}
			temp->pNext = newestNode;//link the list
		}
	}

	void displayList() const
	{
		Node* tempNode = pHead;
		while (tempNode)
		{
			std::cout << tempNode->dietPlan.getName() << std::endl;
			std::cout << tempNode->dietPlan.getGoalCalories() << std::endl;
			std::cout << tempNode->dietPlan.getDate() << std::endl;

			tempNode = tempNode->pNext;
		}
	}
		
		

};

#endif // LINKEDLIST_HPP