#ifndef NODE_HPP
#define NODE_HPP


#include <string>
#include <iostream>

#include "DietPlan.hpp"
class ExercisePlan;


class Node
{
public:
	DietPlan* dietPlan;
	ExercisePlan* exercisePlan;
	Node* pNext;

	Node(const DietPlan& plan);
	Node(const ExercisePlan& plan);

	void displayDailyPlan_exercise(Node* tempNode) const {}
	void displayDailyPlan_diet(Node* tempNode) const {}
};


#include "ExercisePlan.hpp"

#endif //NODE_HPP
