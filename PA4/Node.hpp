#ifndef NODE_HPP
#define NODE_HPP


#include "ExercisePlan.hpp"
#include "DietPlan.hpp"
#include <string>
#include <iostream>

class Node
{
public:
	DietPlan dietPlan;
	ExercisePlan exercisePlan;
	Node* pNext;

	Node(const DietPlan& diet) : dietPlan(diet), pNext(nullptr) {}
	Node(const ExercisePlan& exercise) : exercisePlan(exercise), pNext(nullptr) {}
};

#endif //NODE_HPP
