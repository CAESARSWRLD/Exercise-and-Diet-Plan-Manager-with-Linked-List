#ifndef DIETPLAN_HPP
#define DIETPLAN_HPP
#include <string>
#include <fstream>
#include <iostream>

class DietPlan
{
public:

	int goal_calories;
	std::string name;
	std::string date;

	///constructors

	//default constructor
	DietPlan() : goal_calories(0), name("default plan name"), date("default date") {
		std::cout << "default constructor has been called\n";
	}
	


	//constructor with parameters
	DietPlan(int new_goal_cals, std::string new_name, std::string new_date)
	{
		goal_calories = new_goal_cals;
		name = new_name;
		date = new_date;
	}

	//copy constructor
	DietPlan(const DietPlan& copy) : goal_calories(copy.goal_calories), name(copy.name), date(copy.date) 
	{
	std::cout << "copy created" << std::endl;
	}

	/////GETTERS AND SETTERS
	int get_goal_calories() const
	{
		return goal_calories;
	}

	void set_goal_calories(int new_goal_calories)
	{
		goal_calories = new_goal_calories;
	}

	std::string get_name() const
	{
		return name;
	}

	void set_name(const std::string& new_name)
	{
		name = new_name;
	}

	std::string get_date()
	{
		return date;
	}

	void set_date(const std::string& new_date)
	{
		date = new_date;
	}

};


#endif