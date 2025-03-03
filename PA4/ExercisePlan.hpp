#ifndef EXERCISEPLAN_HPP
#define EXERCISEPLAN_HPP
#include <string>
#include <iostream>
#include <fstream>
#include "linkedList.hpp"


class DietPlan;



class ExercisePlan
{




private:

	int goal_steps;
	std::string name;
	std::string date;
public:


	//default constructor
	ExercisePlan() : goal_steps(0), name(""), date("") {}

	//destructor
	~ExercisePlan()
	{
		//the cout can be uncommented to check the effectiveness of the destructor. 
		//the destructor is called too often because i used a linked list. the data is stored in the nodes.


		//std::cout << "\nexercise plan class destroyed\n";
	}

	//copy constructor
	ExercisePlan(const ExercisePlan& plan) : name(plan.name), goal_steps(plan.goal_steps), date(plan.date) {}


	/*friend void editGoal_exercise(linkedList*& list)
	{
		std::string day_to_edit;
		std::cout << "Input the name of the exercise day you would like to edit\n";
		std::cin >> day_to_edit;

		
	}*/


	friend std::ifstream& operator>>(std::ifstream& input, ExercisePlan& plan)//overloading string extraction:
	{
		std::getline(input, plan.name);
		std::cout << plan.getPlanName();
		std::cout << "\nthis is the name^^^\n" << std::endl;

		input >> plan.goal_steps;
		std::cout << plan.getGoalSteps();

		std::cout << "\nthis is the goal steps^^^\n" << std::endl;

		input.ignore();

		std::getline(input, plan.date);
		std::cout << plan.getDate();
		std::cout << "\nthis is the date^^^\n" << std::endl;
		return input;
	}


	

	
	//
	int getGoalSteps() const
	{
		return goal_steps;
	}

	void setGoalSteps(int goal)
	{
		goal_steps = goal;
	}

	//
	void setPlanName(const std::string& new_name)
	{
		name = new_name;
	}

	const std::string& getPlanName() const
	{
		return name;
	}

	//
	void setDate(const std::string& new_date)
	{
		date = new_date;
	}

	const std::string& getDate() const
	{
		return date;
	}
	

	//overloading string insertion:
	friend std::ostream& operator<<(std::ostream& output, const ExercisePlan& plan)
	{
		output << plan.getPlanName() << "\n" << plan.getGoalSteps() << "\n" << plan.getDate() << "\n\n";
		return output;
	}

};






#endif