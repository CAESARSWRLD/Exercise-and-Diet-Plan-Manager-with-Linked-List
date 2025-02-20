#include <iostream>
#include "DietPlan.hpp"
#include "ExercisePlan.hpp"
#include "FitnessAppWrapper.hpp"
#include <fstream>

void main()
{

	std::ifstream inFile("dietPlans.txt");

	if (inFile.is_open())
	{
		std::cout << "file opened\n\n";
	}
	else
	{
		std::cout << "failed to open file\n\n";
	}

	FitnessAppWrapper app;

	int choice = 0;
	app.displayMenu();

	std::cin >> choice;

	std::cout << "your choice: " << choice << std::endl;
	
	std::cout << "HEY\n\n";


	///CONSTRUCTOR
	ExercisePlan plan(5, "yo", "this");

	std::cout << plan.goal_steps << std::endl;
	std::cout << plan.plan_name << std::endl;
	std::cout << plan.date << std::endl;

}