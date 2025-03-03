#include "DietPlan.hpp"
#include "Node.hpp"
#include "FitnessAppWrapper.hpp"


std::ifstream& operator>>(std::ifstream& input, DietPlan& plan)//overloading string extraction:
{
	std::getline(input, plan.name);
	std::cout << plan.getName();
	std::cout << "\nthis is the name^^^\n" << std::endl;

	input >> plan.goal_calories;
	std::cout << plan.getGoalCalories();

	std::cout << "\nthis is the goal cals^^^\n" << std::endl;

	input.ignore();

	std::getline(input, plan.date);
	std::cout << plan.getDate();
	std::cout << "\nthis is the date^^^\n" << std::endl;
	return input;
}

std::ostream& operator<<(std::ostream& output, const DietPlan& plan)//overloading string insertion:
{
	output << plan.getName() << "\n" << plan.getGoalCalories() << "\n" << plan.getDate() << "\n\n";
	return output;
}