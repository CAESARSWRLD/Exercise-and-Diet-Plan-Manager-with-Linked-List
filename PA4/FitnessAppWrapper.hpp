#ifndef FITNESSAPPWRAPPER_HPP
#define FITNESSAPPWRAPPER_HPP
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include "DietPlan.hpp"
#include "ExercisePlan.hpp"
#include "Node.hpp"

class FitnessAppWrapper
{

private:

	void loadDailyExercisePlan(std::ifstream& inputfile, ExercisePlan weeklyPlan[]);//loads one record from the stream
	

	void loadDailyDietPlan(std::ifstream& inputfile, DietPlan weeklyPlan[]);//loads one record from the stream
	

	void loadWeeklyDietPlan(std::ifstream& inputfile, DietPlan weeklyPlan[]);


	void loadWeeklyExercisePlan(std::ifstream& inputfile, ExercisePlan weeklyPlan[]);


	void displayDailyPlan();


	void storeWeeklyDietPlanToFile(std::ifstream& inputfile, ExercisePlan weeklyPlan[]);


	void storeWeeklyExercisePlanToFile(std::ifstream& inputfile, ExercisePlan weeklyPlan[]);


public:


	void displayMenu();

	void runApp();

};





#endif