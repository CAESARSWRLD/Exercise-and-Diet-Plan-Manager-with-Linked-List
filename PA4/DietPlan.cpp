#include "DietPlan.hpp"
#include "Node.hpp"

std::istream& operator>>(std::istream& inStream, DietPlan& plan)
{
	std::getline(inStream, plan.name);

	int steps;
	inStream >> steps;

	plan.setGoalCalories(steps);

	inStream.ignore();

	std::getline(inStream, plan.date);

	return inStream;
}

std::ostream& operator<<(std::ostream& outStream, const DietPlan& plan)
{
	outStream << plan.name << "\n";
	outStream << plan.goal_calories << "\n";
	outStream << plan.date << "\n";
	return outStream;
}