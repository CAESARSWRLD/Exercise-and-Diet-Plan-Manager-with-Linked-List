#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#pragma once

#include "Node.hpp"


class linkedList
{
private:
	Node* pHead;

public:

	linkedList() : pHead(nullptr) {}

	Node* get_pHead()//get head pointer of linked list
	{
		return pHead;
	}

	void insertEnd_diet(const DietPlan& dietplan)//inserts a node at the end of the linked list
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


	void insertEnd_exercise(const ExercisePlan& exerciseplan)//inserts a node at the end of the linked list
	{
		Node* newestNode = new Node(exerciseplan);

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



	void displayWeeklyPlan_diet() const;

	void displayDailyPlan_diet(Node* tempNode)const;

	void displayWeeklyPlan_exercise() const;

	void displayDailyPlan_exercise(Node* tempNode) const;
		
		

};

#endif // LINKEDLIST_HPP