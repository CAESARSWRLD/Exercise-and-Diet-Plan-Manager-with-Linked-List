#include "ExercisePlan.hpp"

std::istream& operator>>(std::istream& inStream, ExercisePlan& plan)
{
	std::getline(inStream, plan.name);

	int calories;
	inStream >> calories;

	plan.setGoalSteps(calories);

	inStream.ignore();

	std::getline(inStream, plan.date);

	return inStream;
}

